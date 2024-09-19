/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:58:29 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/19 18:23:55 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>


Base* generate(void) {
	int randValue = std::rand() % 3;
	
	if (randValue == 0) {
		std::cout << "Generated: A" << std::endl;
		return new A();
	}
	else if (randValue == 1) {
		std::cout << "Generated: B" << std::endl;
		return new B();
	}
	else {
		std::cout << "Generated: C" << std::endl;
		return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer: C" << std::endl;
	else
		std::cout << "Pointer: Unkown type" << std::endl;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Reference: A" << std::endl;
		return;
	} catch (std::exception& e) {}
	
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Reference: B" << std::endl;
		return;
	} catch(std::exception &e) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Reference: C" << std::endl;
		return;
	} catch (std::exception &e) {
		std::cout << "Reference: Unknown type" << std::endl;
	}
}