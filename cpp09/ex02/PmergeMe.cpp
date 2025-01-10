/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:35 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 15:50:01 by jubaldo          ###   ########.fr       */
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

		int number = std::stoi(numberStr);
		_vector.push_back(number);
		_deque.push_back(number);
	}
}

void PmergeMe::execute(int ac, char **av) {
	parseInput(ac, av);

	// Etape 1: Analyse des arguments
	std::cout << "Before: ";
	for (int num : _vector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	// Etape 2: Tri avec std::vector
	auto startVec = std::chrono::high_resolution_clock::now();
	mergeInsertSortVector(_vector);
	auto endVec = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::micro> durationVec = endVec - startVec;

	// Etape 3: Tri avec std::deque
	auto startDeq = std::chrono::high_resolution_clock::now();
	mergeInsertSortDeque(_deque);
	auto endDeq = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::micro> durationDeq = endDeq - startDeq;

	// Afficher la sequence triee
	std::cout << "After: ";
	for (int num : _vector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	// Afficher les temps d'execution
	std::cout << "Time to process a range of " << _vector.size()
			<< " elements with std::vector: " << durationVec.count() << " us" << std::endl;
	std::cout << "Time to process a range of " << _deque.size()
			<< " elements with std::deque: " << durationDeq.count() << " us" << std::endl;
}