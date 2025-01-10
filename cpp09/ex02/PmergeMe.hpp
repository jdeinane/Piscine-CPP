/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:33 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 15:01:57 by jubaldo          ###   ########.fr       */
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
#include <chrono>
#include <algorithm>

class PmergeMe {
	private:
	std::vector<int> _vector;
	std::deque<int> _deque;

	PmergeMe(PmergeMe const &other);
	PmergeMe &operator=(PmergeMe const &other);
	
	void parseInput(int ac, char **av);
	void validateNumber(const std::string& number) const;
	void removeDuplicates(std::vector<int>& container);

	void mergeInsertSortVector(std::vector<int> &container);
	void mergeInsertSortDeque(std::deque<int>& container);

	public:
	PmergeMe();
	~PmergeMe();

	void execute(int ac, char **av);
};

#endif