/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:14:09 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:10:57 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include "wrongAnimal.hpp"
#include "wrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound!
	meta->makeSound();

	const wrongAnimal* a = new wrongAnimal();
	const wrongAnimal* c = new wrongCat();

	a->makeSound(); //will output the standard sound!
	c->makeSound(); //will output the standard sound!

	delete meta;
	delete i;
	delete j;
	delete a;
	delete c;
	return 0;
}