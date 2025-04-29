/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:43 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/29 14:41:25 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T*				_elements;
		unsigned int	_size;
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array& src);
		Array& operator=(const Array& other);
		~Array(void);

		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size(void) const;
		void	setElement(const T& value, unsigned int index);
};

/*------------------------------------------------------*/
/* cannot use .cpp files 								*/
/* 	-> compiler needs to know types at compile time		*/
/*	-> no separate compilation like with .cpp/.hpp		*/
/*	-> thats why we include .tpp						*/
/*------------------------------------------------------*/
#include "Array.tpp"

#endif
