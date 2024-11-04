/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:39:57 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 17:53:23 by jubaldo          ###   ########.fr       */
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

	template <typename inputIterator>
	void addRange(inputIterator begin, inputIterator end);
	void randomFill(unsigned int count);

	const std::vector<int> &getNumbers() const;
};



#endif