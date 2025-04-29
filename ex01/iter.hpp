/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:52:46 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/29 13:41:24 by dhuss            ###   ########.fr       */
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
template <typename Arr, typename Len, typename Func>
void	iter(Arr* ptr, Len l, Func func)
{
	if (!ptr)
		return ;
	for (Len i = 0; i < l; i++)
		func(ptr[i]);
}

#endif