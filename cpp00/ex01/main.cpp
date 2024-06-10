/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:20:14 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/10 14:51:14 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int	main() {
	PhoneBook phoneBook;
	std::string command;
	
	while (true){
		if (std::cin.eof()) {
			std::cout << "EXIT!" << std::endl;
			break;
		}
		std::cout << "Enter command: ";
		std::getline(std::cin, command);

		if (command == "EXIT")
			break;
		else if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else
			std::cout << "Unknown Command. Please try again." << std::endl;
	}
	return (0);
}
