/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 10:55:19 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/09 21:12:45 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cerr << "Error: Wrong arguments." << std::endl;
		return 1;
	}

	std::string level = av[1];
	Harl harl;

	harl.complain(level);
	return 0;
}