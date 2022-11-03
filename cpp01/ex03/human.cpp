/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:23:31 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/19 19:12:07 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "violence.hpp"

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
};

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	this->weapon = weapon;
};

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = 0;
};

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
};
