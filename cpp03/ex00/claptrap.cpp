/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:57:35 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/14 21:44:01 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "claptrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hit = 10;
	this->_energy = 10;
	this->_damage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks "<< target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has not enough "<< (this->_energy > 0 ? "hit points":"energy") << " to attack " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > 0)
	{
			this->_hit-=amount;
			std::cout << "ClapTrap " << this->_name << " has lost "<< amount << " hit points" << std::endl;
				if (this->_hit <= 0)
					std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_hit+=amount;
		std::cout << "ClapTrap " << this->_name << " has gained "<< amount << " hit points" << std::endl;
		this -> _energy -= 1;
	}
}