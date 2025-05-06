/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:48 by dhuss             #+#    #+#             */
/*   Updated: 2025/05/06 09:10:18 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/*---------------------------------------*/
/* default constructor empty array		 */
/*---------------------------------------*/
template <typename T>
Array<T>::Array(void) : _elements(nullptr), _size(0)
{
}

/*----------------------------------------------------------*/
/* constructor 							 					*/
/* -> Creates an array of n elements	 					*/
/* () is value-initialisation			 					*/
/* For class types 											*/
/* -> calls the default constructor for each element		*/
/* For builtin types										*/
/* -> zero initialises the element							*/
/*----------------------------------------------------------*/
template <typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{
}

/*------------------------------------------*/
/*	Copy constructor						*/
/*------------------------------------------*/
template <typename T>
Array<T>::Array(const Array& src) : _elements(new T[src._size]), _size(src._size)
{
	for (size_t i = 0; i < _size; i++)
	{
		_elements[i] = src._elements[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _elements;
}

/*------------------------------------------*/
/* overloaded assignment operator			*/
/*------------------------------------------*/
template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_elements[i] = other._elements[i];
	}
	return (*this);
}

/*------------------------------------------*/
/* overloaded subscript operator			*/
/*------------------------------------------*/
template <typename T>
T& Array<T>::operator[](const unsigned int index)
{
	if (index >= _size)
		throw(std::out_of_range("Index out of range"));
	return (_elements[index]);
}

/*------------------------------------------*/
/* overloaded const subscript operator		*/
/*------------------------------------------*/
template <typename T>
const T& Array<T>::operator[](const unsigned int index) const
{
	if (index >= _size)
		throw (std::out_of_range("Index out of range"));
	return (_elements[index]);
}

/*------------------------------------------*/
/* returns size of array					*/
/*------------------------------------------*/
template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}

/*------------------------------------------*/
/* sets element at index to value			*/
/*------------------------------------------*/
template <typename T>
void	Array<T>::setElement(const T& value, unsigned int index)
{
	if (index >= _size)
		throw (std::out_of_range("Index out of range"));
	_elements[index] = value;
}
