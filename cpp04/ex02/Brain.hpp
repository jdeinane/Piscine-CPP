/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:38:58 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/14 15:31:55 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain {
public:
	std::string ideas[100];
	
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
};

#endif