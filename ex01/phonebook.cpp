/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:15:36 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/22 17:32:59 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

PhoneBook::PhoneBook() : contactCount(0) {}

void	PhoneBook::addContact() {
	int	index = contactCount % 8;
	contacts[index].setDetails();
	if (contactCount < 8)
		contactCount++;
}

void	PhoneBook::printColumn(const std::string& str) const {
	if (str.length() > 10)
		std::cout << std::setw(9) << str.substr(0 , 9) << ".|";
	else
		std::cout << std::setw(10) << str << '|';
}

bool isNumber(const std::string& str) {
    for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
        if (!std::isdigit(*it)) 
			return false;
    }
    return true;
}

int stringToInt(const std::string& str) {
    std::istringstream iss(str);
    int num;
    iss >> num;
    return num;
}

void	PhoneBook::searchContact() {
	std::cout << "Index     |First Name|Last Name |Nickname  " << std::endl;

	for (int i = 0; i < contactCount; i++) {
		std::cout << std::setw(10) << i + 1 << '|';
		printColumn(contacts[i].getFirstName());
		printColumn(contacts[i].getLastName());
		printColumn(contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout <<"Enter contact's index to view details or press 0 to return: ";
	std::string input;
	std::getline(std::cin, input);

	if (isNumber(input)) {
		int	index = stringToInt(input);
		if (index > 0 && index <= contactCount)
			contacts[index - 1].displayDetails();
		else if (index == 0)
			return;
		else
			std::cout << "Invalid index." <<std::endl;
	}
	else
		std::cout << "Please enter a valid numeric index." << std::endl;
}

//	std::cout << "Enter contact's index to view details or press 0 to return: ";
//	int	index;
//	std::cin >> index;
//	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//	if (index > 0 && index <= contactCount)
//		contacts[index - 1].displayDetails();
//	else if (index == 0)
//		return;
//	else if (index != 0)
//		std::cout << "Invalid index or command." << std::endl;
//	else
//		std::cout << "Invalid index." << std::endl;
