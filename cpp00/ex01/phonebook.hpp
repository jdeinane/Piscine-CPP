/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:20:48 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/10 15:10:48 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>
#include <sstream>
#include <limits>
#include <cctype>
#include <iomanip>

class PhoneBook {
private:
	Contact	contacts[8];
	int		contactCount;
	void	printColumn(const std::string& str) const;
public:
	PhoneBook();
	void	addContact();
	void	searchContact();
};

#endif