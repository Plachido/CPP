/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:19:15 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 12:50:30 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"

Animal::Animal(): type("")
{
	std::cout<< "Default constructor for Animal called" << std::endl;
	return;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal()
{
	std::cout << "Default destructor for Animal called" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout<< "No sound found!" << std::endl;
}

Animal & Animal::operator=(const Animal &other)
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = other.getType();
	return *this;
}
