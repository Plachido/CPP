/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:11:00 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/19 18:33:13 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "violence.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string Weapon::getType(void)
{
	return (this->type);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}