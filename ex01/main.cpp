/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:06:22 by ivloisy           #+#    #+#             */
/*   Updated: 2022/02/05 07:33:12 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Character.hpp"

int main( void )
{ 
	std::cout << std::endl << "\033[4;35m" << "Type Int:" << "\033[0m" << std::endl;
	int	tabInt[6] = { 0, 1, 2, 3, 4, 5 };
	iter( tabInt, 6, printElem );

	std::cout << std::endl << "\033[4;35m" << "Type Float:" << "\033[0m" << std::endl;
	float	tabFloat[6] = { 0, 1, 2, 3, 4, 5 };
	iter( tabFloat, 6, printElem );

	std::cout << std::endl << "\033[4;35m" << "Type Class:" << "\033[0m" << std::endl;
	Character	*tabClass[2];
	tabClass[0] = new Character("Bob", 34);
	tabClass[1] = new Character("Jim", 68);
	iter( *tabClass, 2, printElem );
	delete tabClass[0];
	delete tabClass[1];

	return 0;
}
