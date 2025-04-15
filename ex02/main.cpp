/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:22:55 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/15 10:22:56 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	std::cout << "\033[34m[----------Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- Int Array\033[37m" << std::endl;
	std::cout << "\033[35m--> Default Constructor\033[37m" << std::endl;
	Array<int> intArr;
	std::cout << "The Array size is: " << intArr.size() << std::endl;
	try
	{
		std::cout << intArr[4] << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	};

	std::cout << "\033[35m--> Constructor\033[37m" << std::endl;
	Array<int> intArr2(3);
	std::cout << "The Array size is: " << intArr2.size() << std::endl;
	std::cout << "setting Element at index 2" << std::endl;
	intArr2.setElement(6, 2);
	std::cout << "value at index 2 is: " << intArr2[2] << std::endl;

	std::cout << "\033[35m--> Copy Constructor\033[37m" << std::endl;
	Array<int> intCopy(intArr2);
	std::cout << "The Array size is: " << intCopy.size() << std::endl;
	std::cout << "value at index 2 is: " << intCopy[2] << std::endl;

	std::cout << "\033[35m--> Assignment operator overload\033[37m" << std::endl;
	Array<int> intAssign = intArr2;
	std::cout << "The Array size is: " << intAssign.size() << std::endl;
	std::cout << "value at index 2 is: " << intAssign[2] << std::endl;

	std::cout << "\033[35m--> setting Element at index 0 in Assignment and Copy Constructor to 5\033[37m" << std::endl;
	intCopy.setElement(5, 0);
	intAssign.setElement(5, 0);
	std::cout << "value at index 0 for OG is: " << intArr2[0] << std::endl;
	std::cout << "value at index 0 for Copy is: " << intCopy[0] << std::endl;
	std::cout << "value at index 0 for Assign is: " << intAssign[0] << std::endl;

	std::cout << "\n\033[33m- string Array\033[37m" << std::endl;
	Array<std::string> strArr(5);
	std::cout << "The Array size is: " << strArr.size() << std::endl;
	std::cout << "string array at index 4:" << strArr[4] << std::endl;
	for (int i = 0; i < strArr.size(); i++)
	{
		strArr.setElement("str", i);
		std::cout << "string array at index " << i <<  ": " << strArr[i] << std::endl;
	}
	return (0);
}
