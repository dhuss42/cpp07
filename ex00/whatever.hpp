#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include "iostream"

/*--------------------------------------------------------------*/
/* function template							 				*/
/* 	- is used to create the template functions (final result) 	*/
/*	- happens at compile time									*/
/* template prefix 												*/
/* 	- allows us to use multiple type parameters 				*/
/* function					 									*/
/* 	- T is a template variable/type parameter 					*/
/* 	- place holder for a type that will be provided				*/
/* 	- is determined based on how we call the funct. 			*/
/*--------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/
/* swap function template		 												*/
/* - Swaps the values of two given parameters. Does not return anything		 	*/
/*------------------------------------------------------------------------------*/
template <typename T>
void	swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

/*------------------------------------------------------------------------------*/
/* min function template		 												*/
/* - Compares the two values passed as parameters and returns the smallest one 	*/
/* - If they are equal, it returns the second one								*/
/*------------------------------------------------------------------------------*/
template <typename T>
T min(const T a, const T b)
{
	if (a < b)
		return a;
	else
		return b;
}

/*------------------------------------------------------------------------------*/
/* max function template		 												*/
/* - Compares the two values passed as parameters and returns the greatest one 	*/
/* - If they are equal, it returns the second one								*/
/*------------------------------------------------------------------------------*/
template <typename T>
T max(const T a, const T b)
{
	if (a > b)
		return a;
	else
		return b;
}

// can be called with any type of arg
// 	needs to be the same and must support all comparion operators

#endif
