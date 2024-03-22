/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:18:24 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/22 16:07:30 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
	: firstName("N/A"), lastName("N/A"), nickname("N/A"),
		phoneNumber("N/A"), darkestSecret("N/A") {
}

void	Contact::setDetails() {
	std:: string input;

	std::cout << "Enter firstname: ";
	std::getline(std::cin, input);
	setFirstName(input);

	std::cout << "Enter last name: ";
	std::getline(std::cin, input);
	setLastName(input);

	std::cout << "Enter nickname: ";
	std::getline(std::cin, input);
	setNickname(input);
	
	std::cout << "Enter phone number: ";
	std::getline(std::cin, input);
	setPhoneNumber(input);

	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, input);
	setDarkestSecret(input);
}

// std::getline(std::cin, input) est utilisé pour lire les entrées
// de l'utilisateur, y compris les espaces, jusqu'à ce qu'un saut de ligne soit rencontré.

void	Contact::setFirstName(const std::string& fName){
	firstName = fName;
}

void	Contact::setLastName(const std::string& lName){
	lastName = lName;
}

void	Contact::setNickname(const std::string& nick){
	nickname = nick;
}

void	Contact::setPhoneNumber(const std::string& phone){
	phoneNumber = phone;
}

void	Contact::setDarkestSecret(const std::string& secret){
	darkestSecret = secret;
}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getNickname() const {
	return nickname;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}

void	Contact::displayDetails() const {
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

// Les methodes 'set' prennent un parametre type 'const std::string&' ce qui signifie qu'elles attendent une reference constante a un objet
// 'std::string'. Ca evite les copie inutile de chaines de caracteres et ameliore les performances.

// Les methodes 'get' retournent une copie de l'attribut. Elles sont marquees 'const' car elles ne modifient pas l'etat de l'objet.