/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:19:15 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 12:51:45 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "wrongCat.hpp"

wrongCat::wrongCat()
{
	this->type = "wrongCat";
	std::cout<< "Default constructor for wrongCat called" << std::endl;
	return;
}

wrongCat::wrongCat(wrongCat const & src)
{
	std::cout << "Copy constructor for wrongCat called" << std::endl;
	*this = src;
	return;
}

wrongCat::~wrongCat()
{
	std::cout << "Default destructor for wrongCat called" << std::endl;
}

void wrongCat::makeSound() const
{
	std::cout<< "Miao" << std::endl;
}

wrongCat & wrongCat::operator=(const wrongCat &other)
{
	std::cout << "Assignement operator for wrongCat called" << std::endl;
	this->type = other.getType();
	return *this;
}
