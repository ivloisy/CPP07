/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:06:22 by ivloisy           #+#    #+#             */
/*   Updated: 2022/02/05 08:58:54 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Character.hpp"

int main( void )
{ 
	int a = 2;
	int b = 3;
	int	x = 2;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << ", x = " << x << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "max( a, x ) = " << ::min( a, x ) << std::endl;
	std::cout << "max( a, x ) = " << ::max( a, x ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	Character	bob("Bob", 34);
	Character	jim("Jim", 68);
	std::cout << "Bob:" << std::endl << bob << std::endl;
	std::cout << "Jim:" << std::endl << jim << std::endl;
	std::cout << "The youngest is: " << ::min( bob, jim ).getName() << std::endl;
	::swap(bob, jim);
	std::cout << "Bob:" << std::endl << bob << std::endl;
	std::cout << "Jim:" << std::endl << jim << std::endl;
	std::cout << "The oldest is: " << ::max( bob, jim ).getName() << std::endl;

	return 0;
}
