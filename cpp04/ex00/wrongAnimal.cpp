/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:41:47 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 13:02:03 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(): type("")
{
	std::cout<< "Default constructor for wrongAnimal called" << std::endl;
	return;
}

wrongAnimal::wrongAnimal(wrongAnimal const & src)
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

wrongAnimal::~wrongAnimal()
{
	std::cout << "Default destructor for wrongAnimal called" << std::endl;
}

std::string wrongAnimal::getType() const
{
	return this->type;
}

void wrongAnimal::makeSound() const
{
	std::cout<< "No sound found!" << std::endl;
}

wrongAnimal & wrongAnimal::operator=(const wrongAnimal &other)
{
	std::cout << "Assignement operator for wrongAnimal called" << std::endl;
	this->type = other.getType();
	return *this;
}
