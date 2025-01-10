/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:33 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 23:47:08 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <utility>
#include <algorithm>
#include <climits>

class PmergeMe {
	private:
	std::vector<int> _vector;
	std::deque<int> _deque;

	PmergeMe(PmergeMe const &other);
	PmergeMe &operator=(PmergeMe const &other);

	int stringToInt(const std::string&);
	bool isDigitOnly(const std::string&) const;
	std::vector<int> generateInsertionOrder(int size);
	void insertSmallerElements(std::vector<int>& S, const std::vector< std::pair<int,int> > &pairs);
	void insertSmallerElements(std::deque<int>& S, const std::deque< std::pair<int,int> > &pairs);

	void parseInput(int ac, char **av);
	void validateNumber(const std::string& number) const;

	void mergeInsertSortVector(std::vector<int> &container);
	void mergeInsertSortDeque(std::deque<int>& container);

	public:
	PmergeMe();
	~PmergeMe();

	void execute(int ac, char **av);
};

#endif