/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:41:49 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/14 19:29:46 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main()
{
	Zombie *zombieArr = zombieHorde(10, "Zombie");
	for (int i = 0; i < 10; i++)
		zombieArr[i].announce();
	delete [] zombieArr;
	return (0);
}
