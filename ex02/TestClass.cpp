/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:14:07 by dhuss             #+#    #+#             */
/*   Updated: 2025/05/06 09:14:09 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"

TestClass::TestClass() : _num(5)
{
	std::cout << "TestClass constructor called" << std::endl;
}

TestClass::~TestClass()
{
	std::cout << "TestClass destructor called" << std::endl;
}

int	TestClass::getNum(void) const
{
	return (_num);
}