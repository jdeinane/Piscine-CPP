/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:46:46 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/06 18:49:42 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;
	
public:
	Animal();
	Animal(const Animal& other);

	Animal& operator=(const Animal& other);
	
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound();
};

#endif