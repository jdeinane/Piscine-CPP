/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:07:43 by jubaldo           #+#    #+#             */
/*   Updated: 2024/12/05 16:02:36 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <iterator>

template <typename T>
void easyfind(T &container, int n) {
	// T peut etre n'importe quel type de container (vector, map, list, deque..)
	
	// definition d'un iterateur pour T::iterator
	// ex: std::vector<int>::iterator it
	typename T::iterator it = find(container.begin(), container.end(), n);
	
	if (it != container.end()) {
		std::cout << "The first occurence of " << n << " is at index: "
					// revient a ecrire it - container.begin() mais cela ne 
					// fonctionnerait pas pour les lists et les sets 
					//(iterateurs bidirectionnels)
			<< std::distance(container.begin(), it) << std::endl;
	}
	
	else
		throw std::runtime_error("Element not found");
};

#endif