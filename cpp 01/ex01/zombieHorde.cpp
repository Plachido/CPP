/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:01:25 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/14 19:11:38 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombieArr = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieArr[i].setName(name + std::to_string(i));
	return (zombieArr);
}