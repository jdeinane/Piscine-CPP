/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:55:14 by jubaldo           #+#    #+#             */
/*   Updated: 2024/04/13 11:29:07 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>

class	Harl {
public:
	Harl();
	~Harl();
	
	void complain(std::string level);

private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	void (Harl::*complainHandlers[4])(void);
	std::string levels[4];
};

#endif