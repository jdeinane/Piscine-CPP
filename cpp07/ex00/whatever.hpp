/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:37:08 by jubaldo           #+#    #+#             */
/*   Updated: 2024/10/04 16:56:09 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <string>
#include <iostream>

template <typename T>
void swap(T& param1, T& param2) {
	T tmp;
	
	tmp = param1;
	param1 = param2;
	param2 = tmp;
}

template <typename T>
T min(T param1, T param2) {
	if (param1 < param2)
		return param1;
	return param2;
}

template <typename T>
T max(T param1, T param2) {
	if (param1 > param2)
		return param1;
	return param2;
}
#endif