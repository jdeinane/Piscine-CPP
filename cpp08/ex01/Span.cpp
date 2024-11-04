/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:39:54 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 14:51:11 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : max_size(N) {}

void Span::addNumber(int number) {
	if (numbers.size() >= max_size)
		throw std::out_of_range("Span is already full.");
	numbers.push_back(number);
}

void Span::addNumberImproved(void) {
	srand((unsigned)time(0));
	while (numbers.size() < max_size) {
		int randNumber = (rand() % 10000) + 1;
		numbers.push_back(randNumber);
		usleep(50);
	}
}

int Span::shortestSpan() {
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span.");
	
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());

	int min_span = INT_MAX;
	
	for (size_t i = 1; i < sorted.size(); ++i) {
		int span = sorted[i] - sorted[i - 1];
		if (span < min_span)
			min_span = span;
	}
	return min_span;
}

int Span::longestSpan()
{
	if (numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find a span.");

	int min = *std::min_element(numbers.begin(), numbers.end());
	int max = *std::max_element(numbers.begin(), numbers.end());

	return max - min;
}

Span::~Span() {}

