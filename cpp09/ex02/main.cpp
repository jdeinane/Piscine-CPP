/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:51:09 by jubaldo           #+#    #+#             */
/*   Updated: 2025/01/10 19:47:50 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
	try {
		if (ac < 2) {
			std::cerr << "Error: Please provide a sequence of positive integers as arguments." << std::endl;
			return 1;
		}
		PmergeMe sorter;
		sorter.execute(ac, av);
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}