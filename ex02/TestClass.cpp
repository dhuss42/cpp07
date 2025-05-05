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