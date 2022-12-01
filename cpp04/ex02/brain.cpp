/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 13:39:24 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:18:42 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout<< "Default constructor for Brain called" << std::endl;
};

Brain::Brain(Brain const &src)
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Default destructor for Brain called" << std::endl;
}

Brain & Brain::operator=(Brain const & other)
{
	std::cout<< "Assignement operator for Brain called" << std::endl;
	int i = -1;
	while (++i < 100)
		this->ideas[i] = other.ideas[i];
	return *this;
}