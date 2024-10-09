/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 14:04:00 by jubaldo           #+#    #+#             */
/*   Updated: 2024/10/09 17:12:11 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <exception>

template <typename T>
class Array {
	
	private:
	T* _array;
	unsigned int _size;
	
	public:
	Array() : _array(NULL), _size(0) {}

	Array(unsigned int n) : _array(new T[n]()), _size(n) {}

	Array(Array const &other) : _array(NULL), _size(0) {
		_size = other._size;
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; ++i)
			_array[i] = other._array[i];
	}

	Array &operator=(Array const &other) {
		if (this != &other) {
			delete[] _array;					// libere l'ancienne memoire allouee
			_size = other._size;
			_array = new T[_size];				// alloue un nouveau tableau
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = other._array[i];	// copie les elements
		}
		return *this;
	}
	
	~Array() {
		delete[] _array;
	}

	// surcharge de l'operateur [] pour l'acces aux elements
	T& operator[](unsigned int index) {
		if (index >= _size)
			throw::std::out_of_range("Index out of bounds");
		return _array[index];
	}

	// surchage de l'operateur [] pour acces constant aux elements (pour objects const)
	const T& operator[](unsigned int index) const {
		if (index >= _size)
			throw std::out_of_range("Index out of bounds");
		return _array[index];
	}

	unsigned int size() const {
		return _size;
	}
};

#endif