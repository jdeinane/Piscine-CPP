/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:08:33 by jubaldo           #+#    #+#             */
/*   Updated: 2024/12/05 16:49:09 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vector;

	vector.push_back(4);
	vector.push_back(3);
	vector.push_back(6);
	vector.push_back(1);
	
	try {
		easyfind(vector, 6);
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::list<int> list;
	list.push_back(2);
	list.push_back(4);
	list.push_back(10);
	list.push_back(0);
	
	try {
		easyfind(list, 0);
	}
	catch (const std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::deque<int> queue;
	queue.push_back(123123);
	queue.push_back(9);
	queue.push_back(32);
	queue.push_back(-2);

	try
	{
		easyfind(queue, 123123);
		easyfind(queue, 3);
	}
	catch (const std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}