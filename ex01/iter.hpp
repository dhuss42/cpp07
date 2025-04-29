/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:52:46 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/29 15:01:34 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

/*----------------------------------------------------------*/
/* Applies function to every element in the array			*/
/* Parameters 												*/
/* 	- address of an array									*/
/*  - length of the array									*/
/*  - function called on every element of the array 		*/
/*----------------------------------------------------------*/
template <typename Arr, typename Func>
void	iter(Arr* ptr, size_t len, Func func)
{
	if (!ptr)
		return ;
	for (size_t i = 0; i < len; i++)
		func(ptr[i]);
}

#endif