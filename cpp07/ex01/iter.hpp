/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:48:40 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/26 15:08:04 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <string>
#include <iostream>

template <typename T>
void iter(T* address, int len, void (*func)(T&)) {
	for (int i = 0; i < len; i++)
		func(address[i]);
}

template <typename T>
void printElement(T& element) {
	std::cout << element << std::endl;
}

template <typename T> // ne fonctionnera qu'avec les types pour lequel n++ est valide
void increment(T &n)
{
	n++;
}

#endif