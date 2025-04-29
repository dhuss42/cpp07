/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhuss <dhuss@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 08:51:25 by dhuss             #+#    #+#             */
/*   Updated: 2025/04/29 12:51:22 by dhuss            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main( void )
{
	std::cout << "\033[34m[----------Subject Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- Ints\033[37m" << std::endl;
	std::cout << "\033[35m--> pre swap\033[37m" << std::endl;
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "\033[35m--> post swap\033[37m" << std::endl;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "\033[35m--> min with int\033[37m" << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "\033[35m--> max with int\033[37m" << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "\033[33m- strings\033[37m" << std::endl;
	std::cout << "\033[35m--> pre swap\033[37m" << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\033[35m--> post swap\033[37m" << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\033[35m--> min with string\033[37m" << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "\033[35m--> max with string\033[37m" << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;


	std::cout << "\033[34m[----------More Tests----------]\033[37m" << std::endl;
	std::cout << "\033[33m- Floats\033[37m" << std::endl;
	std::cout << "\033[35m--> pre swap\033[37m" << std::endl;
	float e = 2.45;
	float f = 3.66;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap( e, f );
	std::cout << "\033[35m--> post swap\033[37m" << std::endl;
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "\033[35m--> min with float\033[37m" << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "\033[35m--> max with float\033[37m" << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;


	std::cout << "\033[33m- const Floats\033[37m" << std::endl;
	const float x = 5;
	const float y = 7;
	std::cout << "\033[35m--> min with const float\033[37m" << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "\033[35m--> max with const float\033[37m" << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;


	//		uncomment to see that functions won't work with different types

	// std::cout << "\033[34m[----------Error Tests----------]\033[37m" << std::endl;
	// std::cout << "\033[33m- Different types: int and float\033[37m" << std::endl;
	// std::cout << "\033[35m--> pre swap\033[37m" << std::endl;
	// int g = 2;
	// float h = 3.66;
	// std::cout << "g = " << g << ", h = " << h << std::endl;
	// ::swap( g, h );
	// std::cout << "\033[35m--> post swap\033[37m" << std::endl;
	// std::cout << "g = " << g << ", h = " << h << std::endl;
	// std::cout << "\033[35m--> min with float\033[37m" << std::endl;
	// std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	// std::cout << "\033[35m--> max with float\033[37m" << std::endl;
	// std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	return 0;
}