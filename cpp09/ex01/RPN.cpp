/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:09:50 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/07 14:10:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &other) {
    *this = other;
}

RPN &RPN::operator=(RPN const &other) {
    (void)other;
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string &token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::applyOperation(int a, int b, const std::string &op) {
    if (op == "+")
        return a + b;
    if (op == "-")
        return a - b;
    if (op == "*")
        return a * b;
    if (op == "/") {
        if (b == 0)
            throw std::runtime_error("Error: Divion by zero.");
        return a / b;
    }
    throw std::invalid_argument("Error: Invalid operator.");
}

int RPN::evaluateRPN(const std::string &expression) {
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isOperator(token)) {
            if (_stack.size() < 2)
                throw std::runtime_error("Error: Invalid expression.");
            int b = _stack.top(); _stack.pop();
            int a = _stack.top(); _stack.pop();
            int result = applyOperation(a, b, token);
            _stack.push(result);
        }
        else {
            try {
                std::istringstream tokenStream(token);
                int number;
                if (!(tokenStream >> number) || number < 0 || number > 9)
                    throw std::runtime_error("Error: Invalid token.");
                _stack.push(number);
            } catch (...) {
                throw std::runtime_error("Error: Invalid token.");
            }
        }
    }
    if (_stack.size() != 1)
        throw std::runtime_error("Error: Invalid expression.");
    return _stack.top();
}