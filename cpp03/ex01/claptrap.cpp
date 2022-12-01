/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:57:35 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/14 21:43:50 by plpelleg         ###   ########.fr       */
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

void ClapTrap::setName(const std::string name)
{
	this->_name=name;
}

void ClapTrap::setHit(unsigned int amount)
{
	this->_hit = amount;
}

void ClapTrap::setEnergy(unsigned int amount)
{
	this->_energy = amount;
}

void ClapTrap::setDamage(unsigned int amount)
{
	this->_damage = amount;
}
std::string ClapTrap::getName() const
{
	return (this->_name);
}

int ClapTrap::getHitpoints() const
{
	return (this->_hit);
}

int ClapTrap::getEnergy_points() const
{
	return (this->_energy);
}

int ClapTrap::getAttack_damage() const
{
	return (this->_damage);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this == &rhs)
        return (*this);
    std::cout << "ClapTrap Assignment operator called" << std::endl;
    this->_name = rhs.getName();
    this->_hit = rhs.getHitpoints();
    this->_energy = rhs.getEnergy_points();
    this->_damage = rhs.getAttack_damage();
    return (*this);
}

std::ostream & operator<<( std::ostream & o, ClapTrap const & cl )
{
    o << "ClapTrap " << cl.getName() << " has " << cl.getHitpoints();
    o << " Hit points, " << cl.getEnergy_points() << " Energy points and ";
    o << cl.getAttack_damage() << " Attack damage" << std::endl;
    return o;
}

ClapTrap::ClapTrap( ClapTrap const & src )
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    this->_name = src.getName();
    this->_hit = src.getHitpoints();
    this->_energy = src.getEnergy_points();
    this->_damage = src.getAttack_damage();
}

