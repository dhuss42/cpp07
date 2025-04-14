/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:52:56 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/03 09:28:07 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	subOne(T &value)
{
	value--;
}

template <typename T>
void	print(T &value)
{
	std::cout << value << " ";
}

int	main()
{
	std::cout << "\033[34m[----------Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- Int Array\033[37m" << std::endl;
	std::cout << "\033[35m--> pre subOne\033[37m" << std::endl;
	int arr_int[5] = {1, 2, 3, 4, 5};
	size_t len = 5;
	iter(arr_int, len, print<int>);
	std::cout << std::endl;
	iter(arr_int, len, subOne<int>);
	std::cout << "\033[35m--> post subOne\033[37m" << std::endl;
	iter(arr_int, len, print<int>);
	std::cout << std::endl;
	std::cout << "\033[35m--> pre subOne\033[37m" << std::endl;


	std::cout << "\n\033[33m- Float Array\033[37m" << std::endl;
	std::cout << "\033[35m--> pre subOne\033[37m" << std::endl;
	float	arr_float[5] = {1.5, 2.34, 3.7, 4.09, 5.1234};
	double len_d = 5;
	iter(arr_float, len, print<float>);
	std::cout << std::endl;
	iter(arr_float, len, subOne<float>);
	std::cout << "\033[35m--> post subOne\033[37m" << std::endl;
	iter(arr_float, len, print<float>);
	std::cout << std::endl;
	std::cout << "\033[35m--> pre subOne\033[37m" << std::endl;
}
