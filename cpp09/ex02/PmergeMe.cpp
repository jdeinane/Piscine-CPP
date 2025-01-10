/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:35 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 19:22:47 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &other) {
	*this = other;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &other) {
	(void)other;
	return *this;
}

PmergeMe::~PmergeMe() {}

int PmergeMe::stringToInt(const std::string &str) {
	std::stringstream ss(str);
	int number;
	ss >> number;
	if (ss.fail() || !ss.eof()) {
		throw std::invalid_argument("Error: Invalid input. NOt a valid integer.");
	}
	return number;
}

bool PmergeMe::isDigitOnly(const std::string &str) {
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit((*it)))
			return false;
	}
	return true;
}

void PmergeMe::validateNumber(const std::string &number) const {
	if (number.empty() || !std::all_of(number.begin(), number.end(), ::isdigit)) {
		throw std::invalid_argument("Error: Invalid input. Only positive integers are allowed.");
	}
}

void PmergeMe::mergeInsertSortVector(std::vector<int> &container) {
	if (container.size() <= 1)
		return;
	
	std::vector<int> left(container.begin(), container.begin() + container.size() / 2);
	std::vector<int> right(container.begin() + container.size() / 2, container.end());

	mergeInsertSortVector(left);
	mergeInsertSortVector(right);

	container.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(container));
}

void PmergeMe::mergeInsertSortDeque(std::deque<int> &container) {
	if (container.size() <= 1)
		return;
	
	std::deque<int> left(container.begin(), container.begin() + container.size() / 2);
	std::deque<int> right(container.begin() + container.size() / 2, container.end());

	mergeInsertSortDeque(left);
	mergeInsertSortDeque(right);

	container.clear();
	std::merge(left.begin(), left.end(), right.begin(), right.end(), std::back_inserter(container));
}

// Analyse et stockage des entrees dans les conteneurs
void PmergeMe::parseInput(int ac, char **av) {
	for (int i = 1; i < ac; i++) {
		std::string numberStr = av[i];
		validateNumber(numberStr);

		int number = stringToInt(numberStr);

		if (std::find(_vector.begin(), _vector.end(), number) != _vector.end() ||
			std::find(_deque.begin(), _deque.end(), number) != _deque.end()) {
			throw std::invalid_argument("Error: Duplicate number detected: " + numberStr);
		}
		
		_vector.push_back(number);
		_deque.push_back(number);
	}
}

void PmergeMe::execute(int ac, char **av) {
	parseInput(ac, av);

	// Etape 1: Analyse des arguments
	std::cout << "Before: ";
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Etape 2: Tri avec std::vector
	clock_t startVec = clock();
	mergeInsertSortVector(_vector);
	clock_t endVec = clock();
	double durationVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC;

	// Etape 3: Tri avec std::deque
	clock_t startDeq = clock();
	mergeInsertSortDeque(_deque);
	clock_t endDeq = clock();
	double durationDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC;

	// Afficher la sequence triee
	std::cout << "After: ";
	for (std::vector<int>::iterator it = _vector.begin(); it != _vector.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Afficher les temps d'execution
	std::cout << "Time to process a range of " << _vector.size()
			<< " elements with std::vector: " << (durationVec * 1e6) << " us" << std::endl;
	std::cout << "Time to process a range of " << _deque.size()
			<< " elements with std::deque: " << (durationDeq * 1e6) << " us" << std::endl;
}