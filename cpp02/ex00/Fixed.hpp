/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:03:35 by jubaldo           #+#    #+#             */
/*   Updated: 2024/06/13 15:36:46 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int value;
	static const int fractional_bits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	// Accesseurs
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif

// Getters: fonctions qui permettent de lire les valeurs des attributs prives d'un objet sans les modifier.
// Setters: fonctions qui permettent de modifier les valeurs des attributs prives d'un objet.


// Constructeur par defaut: initialise les objects de la classe.
// Constructeur de recopie: permet de creer une copie d'un objet existant.
// Operateur d'affectation: permet de copier les valeurs d'un objet dans un autre objet existant.
// Destructeur: nettoie correctement les ressources lorsque l'objet n'est plus necessaire.