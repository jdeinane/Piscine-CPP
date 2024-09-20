/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:48:40 by jubaldo           #+#    #+#             */
/*   Updated: 2024/09/20 14:01:09 by jubaldo          ###   ########.fr       */
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

void increment(int &n) {
	n++;
}

#endif