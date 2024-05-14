/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:03:55 by jubaldo           #+#    #+#             */
/*   Updated: 2024/05/13 14:41:49 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;

public:
	Cat();
	virtual ~Cat();
	Cat(const Cat& other);
	Cat& operator=(const Cat& other);
	
	virtual void makeSound() const;
};

#endif