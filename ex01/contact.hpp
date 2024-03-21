/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:57:51 by jubaldo           #+#    #+#             */
/*   Updated: 2024/03/21 23:58:40 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
	std::string firstName;
	std::string	lastName;
	std::string	nickname;
	std::string phoneNumber;
	std::string	darkestSecret;
public:
	void	setDetails();
	void	displaySummary() const;
	void	displayDetails() const;
};

#endif