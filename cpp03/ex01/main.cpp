/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:25:23 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/14 22:10:09 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scavtrap.hpp"

int main()
{
	ScavTrap A("Iva");
	A.attack("Zanicchi");
	A.takeDamage(101);
	A.beRepaired(9);
	A.guardGate();
}