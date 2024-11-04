/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:39:57 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 14:36:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>
#include <climits>
#include <unistd.h>

class Span {
	private:
	Span();
	std::vector<int> numbers;
	unsigned int max_size;

	public:
	Span(unsigned int _N);
	~Span();

	void addNumber(int number);
	void addNumberImproved(void);
	int shortestSpan();
	int longestSpan();
};



#endif