/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:56:11 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/08 19:40:51 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int strlen(std::string string)
{
	int i = -1;
	while (string[++i] != '\0')
		;
	return i;
}

int semi_atoi(std::string string)
{
	int i = -1;
	int value = 0;
	int length = strlen(string);
	while(++i < length)
		value = (value * 10) + ((int)string[i] - 48);
	return value;
}

int intlen(int num)
{
	int digits = 0;
	while (num)
	{
		++digits;
		num /= 10;
	}
	return digits;
}
