#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	addOne(T &value)
{
	value++;
}

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