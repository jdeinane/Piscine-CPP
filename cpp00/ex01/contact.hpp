/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:57:51 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/22 13:20:14 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
private:
	std::string firstName;
	std::string	lastName;
	std::string	nickname;
	std::string phoneNumber;
	std::string	darkestSecret;
public:
	Contact();
	// Methodes pour definir les attributs
	void	setFirstName(const std::string& fName);
	void	setLastName(const std::string& lName);
	void	setNickname(const std::string& nick);
	void	setPhoneNumber(const std::string& phone);
	void	setDarkestSecret(const std::string& secret);
	void	displayDetails() const;
	void	setDetails();
	// Methodes pour obtenir les valeurs des attributs
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif