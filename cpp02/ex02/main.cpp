/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:48:17 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/14 13:29:40 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b( Fixed( 5.05f ) * Fixed ( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}

// int main(void)
// {

// 	std::cout << "## TEST COMPLET ###" <<std::endl;

// 	Fixed a;
// 	Fixed const b(10);
// 	Fixed const c(42.42f);
// 	Fixed const d(b);

// 	a = Fixed(1234.4321f);

// 	std::cout << "## TEST OPERATEURS ###" << std::endl;

// 	Fixed e = a + b;
// 	std::cout << "a + b is " << e << std::endl;

// 	Fixed f = c - d;
// 	std::cout << "c - d is " << f << std::endl;

// 	Fixed g = b * c;
// 	std::cout << "b * c is " << g << std::endl;

// 	Fixed h = c / b;
// 	std::cout << "c / b is " << h << std::endl;

// 	std::cout << "## TEST INCREMENTATIONS ###" << std::endl;

// 	int x = 5;

// 	std::cout << "Initial value of x: " << x << std::endl;
// 	std::cout << "Value after ++x: " << ++x << std::endl;
// 	std::cout << "Value of x now: " << x << std::endl;

// 	x = 5;

// 	std::cout << "Initial value of x: " << x << std::endl;
// 	std::cout << "Value after x++: " << x++ << std::endl;
// 	std::cout << "Value of x now: " << x << std::endl;

// 	std::cout << "## TEST DECREMENTATIONS ###" << std::endl;
	
// 	int y = 9;

// 	std::cout << "Initial value of y: " << y << std::endl;
// 	std::cout << "Value after --y: " << --y << std::endl;
// 	std::cout << "Value of y now: " << y << std::endl;

// 	y = 9;

// 	std::cout << "Initial value of y: " << y << std::endl;
// 	std::cout << "Value after y--: " << y-- << std::endl;
// 	std::cout << "Value of y now: " << y << std::endl;

// 	std::cout << "## TEST MIN AND MAX ###" << std::endl;

// 	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
// 	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;

// 	return 0;
// }