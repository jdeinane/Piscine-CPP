/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:29:11 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/02 14:41:26 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bob("Bob", 75);
		std::cout << bob << std::endl;
		
		bob.incrementGrade();
		std::cout << "After increment: " << bob << std::endl;

		bob.decrementGrade();
		std::cout << "After decrement: " << bob << std::endl;
		
		Bureaucrat alice("Alice", 0);
	}
	catch (std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat charlie("Charlie", 151);
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat dave("Dave", 2);
		std::cout << dave << std::endl;
		
		dave.incrementGrade();
		std::cout << "After increment: " << dave << std::endl;

		dave.incrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	try {
		Bureaucrat eve("Eve", 149);
		std::cout << eve << std::endl;

		eve.decrementGrade();
		std::cout << "After decrement: " << eve << std::endl;
		eve.decrementGrade();
	}
	catch (const std::exception &e) {
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	
	return 0;
}