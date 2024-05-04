/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:51:00 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/04 20:14:25 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <string>
#include <iostream>

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string const &name);

	virtual ~FragTrap();

	void highFivesGuys(void);
	void attack(const std::string& target);
};

#endif