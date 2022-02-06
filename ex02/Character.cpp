/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivloisy <ivloisy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 06:27:03 by ivloisy           #+#    #+#             */
/*   Updated: 2022/02/06 04:45:28 by ivloisy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character() : _name("Character"), _age(42)
{
	std::cout << "\033[2;37m" << "Character constructor called" << "\033[0m" << std::endl;
	return ;
}

Character::Character( const Character & src ) : _name(src._name), _age(src._age)
{
	std::cout << "\033[2;37m" << "Character copy constructor called" << "\033[0m" << std::endl;
	return ;
}

Character::Character( std::string name, int age) : _name(name), _age(age)
{
	std::cout << "\033[2;37m" << "Character constructor called" << "\033[0m" << std::endl;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	std::cout << "\033[2;37m" << "Character destructor called" << "\033[0m" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs)
	{
		this->_name = rhs._name;
		this->_age = rhs._age;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	o << "name:\t" << i.getName() << std::endl << "age:\t" << i.getAge() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Character::getName() const
{
	return this->_name;
}

int	Character::getAge() const
{
	return this->_age;
}

void	Character::setName( std::string name )
{
	this->_name = name;
	return ;
}

void	Character::setAge( int age )
{
	this->_age = age;
	return ;
}


/* ************************************************************************** */