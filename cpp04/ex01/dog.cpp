/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:27:50 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:38:30 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout<< "Default constructor for Dog called" << std::endl;
	return;
}

Dog::Dog(Dog const & src)
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog()
{
	std::cout << "Default destructor for Dog called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout<< "Bau" << std::endl;
}

Dog & Dog::operator=(const Dog &other)
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	this->type = other.getType();
	return *this;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}
