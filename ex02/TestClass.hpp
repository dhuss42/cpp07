/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:14:12 by dhuss             #+#    #+#             */
/*   Updated: 2025/05/06 09:14:13 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTCLASS_HPP
# define TESTCLASS_HPP

#include <iostream>

class TestClass
{
	private:
		int	_num;
	public:
		TestClass();
		~TestClass();
		int	getNum(void) const;
};

#endif