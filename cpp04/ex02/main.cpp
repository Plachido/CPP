/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 12:14:09 by plpelleg          #+#    #+#             */
/*   Updated: 2022/11/25 14:51:43 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "cat.hpp"
#include "dog.hpp"


int main()
{

	const Animal* j = new Dog();
	const Cat* x = new Cat();
	
	delete j;//should not create a leak
	delete x;
	return 0;
}