/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:19:15 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:38:44 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout<< "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat()
{
	std::cout << "Default destructor for Cat called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout<< "Miao" << std::endl;
}

Cat & Cat::operator=(const Cat &other)
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = other.getType();
	return *this;
}

Brain* Cat::getBrain() const
{
	return this->brain;
}
