/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:38:01 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/20 13:42:40 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	int a = 5;
	int b = 8;

	std::cout << "------ Testing with INT ------" << std::endl;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "Min: " << ::min(a, b) << std::endl;
	std::cout << "Max: " << ::max(a, b) << std::endl;


	std::string s1 = "hello";
	std::string s2 = "world";
	
	std::cout << "------ Testing with CHAR ------" << std::endl;
	std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "Min: " << ::min(s1, s2) << std::endl;
	std::cout << "Max: " << ::max(s1, s2) << std::endl;
}