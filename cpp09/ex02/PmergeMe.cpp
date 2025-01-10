/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:35 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 23:48:15 by jubaldo          ###   ########.fr       */
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
		throw std::invalid_argument("Error: Invalid input. Not a valid integer.");
	}
	return number;
}

bool PmergeMe::isDigitOnly(const std::string &str) const {
	for (std::string::const_iterator it = str.begin(); it != str.end(); it++) {
		if (!std::isdigit((*it)))
			return false;
	}
	return true;
}

void PmergeMe::validateNumber(const std::string &number) const {
	if (number.empty() || !isDigitOnly(number)) {
		throw std::invalid_argument("Error");
	}
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

// Genere l'ordre d'insertion base sur les puissances de deux
std::vector<int> PmergeMe::generateInsertionOrder(int size) {
	std::vector<int> order;
	int power = 1;

	while (power<= size) {
		order.push_back(power);
		power *= 2;
	}
	
	for (int i = 1; i <= size; i++) {
		if (std::find(order.begin(), order.end(), i) == order.end())
			order.push_back(i);
	}
	return order;
}

// Insere les petits elements dans la sequence triee
void PmergeMe::insertSmallerElements(std::vector<int>& S, const std::vector< std::pair<int, int> > &pairs) {
	for (size_t i = 0; i < pairs.size(); i++) {
		int small = pairs[i].first;
		if (small != INT_MAX) {
			std::vector<int>::iterator pos = std::lower_bound(S.begin(), S.end(), small);
			S.insert(pos, small);
		}
	}
}

void PmergeMe::insertSmallerElements(std::deque<int>& S, const std::deque< std::pair<int, int> > &pairs) {
	for (size_t i = 0; i < pairs.size(); i++) {
		int small = pairs[i].first;
		if (small != INT_MAX) {
			std::deque<int>::iterator pos = std::lower_bound(S.begin(), S.end(), small);
			S.insert(pos, small);
		}
	}
}

void PmergeMe::mergeInsertSortVector(std::vector<int> &container) {
	if (container.size() <= 1)
		return;
	
	// Etape 1: Creer et trier les pairs
	std::vector<std::pair<int, int> > pairs;
	for (size_t i = 0; i + 1 < container.size(); i += 2) {
		if (container[i] > container[i + 1])
			pairs.push_back(std::make_pair(container[i + 1], container[i]));
		else
			pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}
	
	// Ajouter l'element restant s'il y a un nombre impair
	if (container.size() % 2 != 0)
		pairs.push_back(std::make_pair(container.back(), INT_MAX));
	
	// Etape 2: Trier recursivement les grands elements
	std::vector<int> mainSeq;
	for (size_t i = 0; i < pairs.size(); i++) {
		mainSeq.push_back(pairs[i].second);
	}
	mergeInsertSortVector(mainSeq);

	// Etape 3 et 4: Inserer les petits elements
	insertSmallerElements(mainSeq, pairs);

	// Etape 5: Optimiser l'insertion (ordre base sur les puissances de deux)
	std::vector<int> insertionOrder = generateInsertionOrder(pairs.size());
	for (size_t i = 0; i < insertionOrder.size(); i++) {
		int idx = insertionOrder[i];
		if (idx < pairs.size() && pairs[idx].first != INT_MAX) {
			std::vector<int>::iterator pos = std::lower_bound(mainSeq.begin(), mainSeq.end(), pairs[idx].first);
			mainSeq.insert(pos, pairs[idx].first);
		}
	}
	container = mainSeq;
}

void PmergeMe::mergeInsertSortDeque(std::deque<int> &container) {
	if (container.size() <= 1)
		return;
	
	// Etape 1: Creer et trier les pairs
	std::deque<std::pair<int, int> > pairs;
	for (size_t i = 0; i + 1 < container.size(); i += 2) {
		if (container[i] > container[i + 1])
			pairs.push_back(std::make_pair(container[i + 1], container[i]));
		else
			pairs.push_back(std::make_pair(container[i], container[i + 1]));
	}
	
	// Ajouter l'element restant s'il y a un nombre impair
	if (container.size() % 2 != 0)
		pairs.push_back(std::make_pair(container.back(), INT_MAX));
	
	// Etape 2: Trier recursivement les grands elements
	std::deque<int> mainSeq;
	for (size_t i = 0; i < pairs.size(); i++) {
		mainSeq.push_back(pairs[i].second);
	}
	mergeInsertSortDeque(mainSeq);

	// Etape 3 et 4: Inserer les petits elements
	insertSmallerElements(mainSeq, pairs);

	// Etape 5: Optimiser l'insertion (ordre base sur les puissances de deux)
	std::vector<int> insertionOrder = generateInsertionOrder(pairs.size());
	for (size_t i = 0; i < insertionOrder.size(); i++) {
		int idx = insertionOrder[i];
		if (idx < pairs.size() && pairs[idx].first != INT_MAX) {
			std::deque<int>::iterator pos = std::lower_bound(mainSeq.begin(), mainSeq.end(), pairs[idx].first);
			mainSeq.insert(pos, pairs[idx].first);
		}
	}
	container = mainSeq;
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