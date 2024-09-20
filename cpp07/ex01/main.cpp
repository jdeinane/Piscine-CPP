/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:48:25 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/20 14:03:13 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	int array[] = {1, 2, 3, 4, 5};
	std::cout << "Original array: " << std::endl;
	::iter(array, 5, printElement);
	
	std::cout << "Incrementing array: " << std::endl;
	::iter(array, 5, increment);
	::iter(array, 5, printElement);

	std::string str[] = {"Hello", "World", "!"};
	std::cout << "String array: " << std::endl;
	::iter(str, 3, printElement);
}