/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:48:17 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/13 17:13:19 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int	main(void)
// {
// 	Fixed		a;
// 	Fixed const	b( Fixed( 5.05f ) * Fixed ( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;

// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	return 0;
// }

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	Fixed e = a + b;
	std::cout << "a + b is " << e << std::endl;

	Fixed f = c - d;
	std::cout << "c - d is " << f << std::endl;

	Fixed g = b * c;
	std::cout << "b * c is " << g << std::endl;

	Fixed h = c / b;
	std::cout << "c / b is " << h << std::endl;

	std::cout << "++a is " << ++a << std::endl;
	std::cout << "a++ is " << a++ << std::endl;
	std::cout << "a is now " << a << std::endl;

	std::cout << "--a is " << --a << std::endl;
	std::cout << "a-- is " << a-- << std::endl;
	std::cout << "a is now " << a << std::endl;

	std::cout << "min(a, b) is " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;

	return 0;
}