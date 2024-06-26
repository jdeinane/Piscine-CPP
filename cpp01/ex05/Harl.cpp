/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:55:32 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 19:26:56 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	complainHandlers[0] = &Harl::debug;
	complainHandlers[1] = &Harl::info;
	complainHandlers[2] = &Harl::warning;
	complainHandlers[3] = &Harl::error;

	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*complainHandlers[i])();
			return;
		}
	}
	std::cout << "Harl doesn't know this level: " << level << std::endl;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for . I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}
