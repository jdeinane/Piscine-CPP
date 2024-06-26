/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:43:48 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 20:13:43 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	
	// Affiche les adresses
	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	// Affiche les valeurs
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std:: cout << stringREF << std::endl;
}


// Pointeurs : Flexibles, peuvent être nuls, peuvent être réassignés, supportent 
// 			l'arithmétique des pointeurs. 

// Références : Simples, toujours valides après initialisation, 
// 			ne peuvent pas être réassignées, n 'ont pas besoin 
// 			d'être déréférencées.