/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:07:43 by jubaldo           #+#    #+#             */
/*   Updated: 2024/10/14 11:39:01 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

template <typename T>
void easyfind(T &container, int n) {
	typename T::iterator it = find(container.begin(), container.end(), n);
	if (it != container.end()) 
		std::cout << "The first occurence of " << n << " is at index: "
			<< it - container.begin() << std::endl;
	else
		throw std::runtime_error("Element not found");
};

#endif