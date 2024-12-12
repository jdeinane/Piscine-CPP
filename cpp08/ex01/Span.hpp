/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:39:57 by jubaldo           #+#    #+#             */
/*   Updated: 2024/12/05 19:10:19 by jubaldo          ###   ########.fr       */
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
#include <set>

class Span {
	private:
	Span();
	std::vector<int> numbers;
	unsigned int max_size;

	public:
	Span(unsigned int _N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

	void randomFill(unsigned int count);

	const std::vector<int> &getNumbers() const;
};



#endif