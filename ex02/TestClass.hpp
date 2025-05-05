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