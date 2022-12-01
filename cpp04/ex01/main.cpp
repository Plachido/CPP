/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:14:09 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:36:00 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"


int main()
{
	Animal* animal_arr[100];
	int i = -1;
	while (++i<50)
		animal_arr[i] = new Dog();
	i--;
	while (++i<100)
		animal_arr[i] = new Cat();	
	i = 0;
	while (i<100)
		delete animal_arr[i++];
	
	const Animal* j = new Dog();
	const Animal* x = new Cat();
	
	delete j;//should not create a leak
	delete x;
	return 0;
}