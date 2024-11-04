/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:39:54 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 17:55:58 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : max_size(N) {}

void Span::addNumber(int number) {
	if (numbers.size() >= max_size)
		throw std::out_of_range("Span is already full.");
	numbers.push_back(number);
}

Span::Span(const Span &other) : numbers(other.numbers), max_size(other.max_size) {}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		numbers = other.numbers;
		max_size = other.max_size;
	}
	return *this;
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

template <typename inputIterator>

void Span::addRange(inputIterator begin, inputIterator end) {
	if (std::distance(begin, end) > static_cast<int>(max_size - numbers.size()))
		throw std::out_of_range("Not enough space in Span to add all random elements.");
	numbers.insert(numbers.end(), begin, end);
}

void Span::randomFill(unsigned int count) {
	if (count > max_size - numbers.size())
		throw std::out_of_range("Not enough space in Span to add all random elements.");

	std::set<int> uniqueNumbers;
	srand((unsigned)time(0));
	while (uniqueNumbers.size() < count)
		uniqueNumbers.insert((rand() % INT_MAX) + 1);
	
	std::vector<int> randomNumbers(uniqueNumbers.begin(), uniqueNumbers.end());
	addRange(randomNumbers.begin(), randomNumbers.end());
}

const std::vector<int> &Span::getNumbers() const {
	return numbers;
}

Span::~Span() {}

