/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 20:25:23 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/14 20:27:01 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "claptrap.hpp"

int main()
{
	ClapTrap A("Iva");
	A.attack("Zanicchi");
	A.takeDamage(9);
	A.beRepaired(9);
}