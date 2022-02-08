/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:06:22 by ivloisy           #+#    #+#             */
/*   Updated: 2022/02/08 16:45:36 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Character.hpp"

int main( void )
{
	std::cout.precision(1);
	std::cout << std::setiosflags( std::ios::fixed );

	std::cout << std::endl << "\033[4;33m" << "Type Int:" << "\033[0m" << std::endl;
	int	tabInt[6] = { 0, 1, 2, 3, 4, 5 };
	iter( tabInt, 6, printElem );

	std::cout << 
	std::cout << std::endl << "\033[4;33m" << "Type Float:" << "\033[0m" << std::endl;
	float	tabFloat[6] = { 0, 1, 2, 3, 4, 5 };
	iter( tabFloat, 6, printElem );

	std::cout << std::endl << "\033[4;33m" << "Type Pointer Class:" << "\033[0m" << std::endl;
	Character	*tabClass[2];
	tabClass[0] = new Character("Bob", 34);
	tabClass[1] = new Character("Jim", 68);
	iter( tabClass, 2, printElem );
	delete tabClass[0];
	delete tabClass[1];

	std::cout << std::endl << "\033[4;33m" << "Type Class:" << "\033[0m" << std::endl;
	Character	tabClas[2] = { Character("Pam", 25), Character("Kim", 36) };
	iter ( tabClas, 2, printElem );

	return 0;
}
