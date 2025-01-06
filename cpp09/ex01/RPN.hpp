/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:09:57 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/06 17:28:53 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <string>
#include <iostream>
#include <stack>
#include <sstream>
#include <stdexcept>

class RPN {
    private:
    std::stack<int> _stack;

	RPN(RPN const &other);
	RPN &operator=(RPN const &other);

	public:
	RPN();
	~RPN();

    bool isOperator(const std::string &token);
    int applyOperation(int a, int b, const std::string &op);
    int evaluateRPN(const std::string &expression);
};

#endif