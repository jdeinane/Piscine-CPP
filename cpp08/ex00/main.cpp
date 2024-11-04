/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:08:33 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 17:57:49 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> array;

	array.push_back(4);
	array.push_back(3);
	array.push_back(6);
	array.push_back(1);
	
	int n = 6;

	try {
		easyfind(array, n);
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}