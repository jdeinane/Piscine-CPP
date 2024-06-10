/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:18:24 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/10 15:22:26 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact()
	: firstName("N/A"), lastName("N/A"), nickname("N/A"),
		phoneNumber("N/A"), darkestSecret("N/A") {
}

static bool isNumber(const std::string &str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it)
	{
		if (!std::isdigit(*it))
			return false;
	}
	return true;
}

void	Contact::setDetails() {
	std:: string input;

	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter first name: ";
		std::getline(std::cin, input);
		if (!input.empty()){
			setFirstName(input);
			break;
		}
	}

	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter last name: ";
		std::getline(std::cin, input);
		if (!input.empty()){
			setLastName(input);
			break;
		}
	}

	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter nickname: ";
		std::getline(std::cin, input);
		if (!input.empty()){
			setNickname(input);
			break;
		}
	}

	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter phone number: ";
		std::getline(std::cin, input);
		if (!input.empty() && isNumber(input)){
			setPhoneNumber(input);
			break;
		}
	}

	while (true)
	{
		if (std::cin.eof())
			return;
		std::cout << "Enter darkest secret: ";
		std::getline(std::cin, input);
		if (!input.empty()){
			setDarkestSecret(input);
			break;
		}
	}
}

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