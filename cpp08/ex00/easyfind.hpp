/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:07:43 by jubaldo           #+#    #+#             */
/*   Updated: 2024/10/11 18:43:58 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>
T easyfind(std::vector<int> &array, int n) {
	try {
		auto it = find(array.begin(), array.end(), n);
		if (it != array.end()) 
			std::cout << "The first occurence of " << n << " is at index: "
			<< it - array.begin() << std::endl;
		else
			throw "Occurence not found";
	}
	catch (const char* e) 
		std::cout << "Error: " << e << std::endl;
};

#endif