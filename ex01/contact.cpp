/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 00:18:24 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/22 00:32:50 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
	: firstName("N/A"), lastName("N/A"), nickname("N/A"),
		phoneNumber("N/A"), darkestSecret("N/A") {
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

// Les methodes 'set' prennent un parametre type 'const std::string&' ce qui signifie qu'elles attendent une reference constante a un objet
// 'std::string'. Ca evite les copie inutile de chaines de caracteres et ameliore les performances.

// Les methodes 'get' retournent une copie de l'attribut. Elles sont marquees 'const' car elles ne modifient pas l'etat de l'objet.