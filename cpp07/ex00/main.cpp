/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:38:01 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/20 13:47:27 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void) {
	int a = 2;
	int b = 3;

	std::cout << "------ Testing with INT ------" << std::endl;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	::swap(a, b);
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string s1 = "chaine1";
	std::string s2 = "chaine2";
	
	std::cout << "------ Testing with CHAR ------" << std::endl;
	std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	::swap(s1, s2);
	std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;
	std::cout << "min(s1, s2) = " << ::min(s1, s2) << std::endl;
	std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl;

	return 0;
}