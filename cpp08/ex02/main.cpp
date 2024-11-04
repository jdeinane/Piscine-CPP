/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:03:42 by jubaldo           #+#    #+#             */
/*   Updated: 2024/11/04 17:26:54 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	// initialisation des iterateurs
	MutantStack<int>::iterator it = mstack.begin(); 
	MutantStack<int>::iterator ite = mstack.end();
	
	// demontre la possibilite d'iterer dans la stack
	++it;
	--it;
	
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	
	// on valide que MutantStack peut etre utilise la ou une std::stack serait attendue
	std::stack<int> s(mstack); 


	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << std::endl;
	
	std::cout << "Test des itérateurs constants :" << std::endl;
	MutantStack<int>::const_iterator cit = mstack.cbegin();
	MutantStack<int>::const_iterator cite = mstack.cend();
	while (cit != cite)
	{
		std::cout << *cit << " ";
		++cit;
	}
	std::cout << std::endl;

	std::cout << "Test des itérateurs inverses :" << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << std::endl;

	std::cout << "Test des itérateurs inverses constants :" << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.crbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.crend();
	while (crit != crite)
	{
		std::cout << *crit << " ";
		++crit;
	}
	std::cout << std::endl;

	return 0;
}

// int main()
// {
// 	std::list<int> mlist;

// 	mlist.push_back(5);
// 	mlist.push_back(17);
// 	std::cout << mlist.back() << std::endl;
// 	mlist.pop_back();
// 	std::cout << mlist.size() << std::endl;

// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	mlist.push_back(0);

// 	std::list<int>::iterator it = mlist.begin();
// 	std::list<int>::iterator ite = mlist.end();

// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}

// 	return 0;
// }