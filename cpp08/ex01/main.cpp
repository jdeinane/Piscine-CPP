/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:45:03 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 15:47:43 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	try {
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	// Span sp(100);

	// sp.randomFill(100);

	// for (std::vector<int>::const_iterator it = sp.getNumbers().begin(); it != sp.getNumbers().end(); ++it)
	// 	std::cout << *it << " ";
	// std::cout << std::endl;
	
	
	// try {
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	// catch (const std::exception &e) {
	// 	std::cerr << e.what() << std::endl;
	// }

	return 0;
}