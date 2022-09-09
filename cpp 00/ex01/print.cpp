/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 19:38:57 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/08 19:39:04 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void print_column (std::string string)
{
int i = -1;
int length = strlen(string);
int whitespaces = 10 - length;
if (length > 10)
{
	string[9] = '.';
	string[10] = '\0';
	length = strlen(string);
}
while(++i < whitespaces)
	std::cout << " ";
i = -1;
while (string[++i] != '\0')
	std::cout << string[i];
std::cout<< "|";
}

void print_detail(Contact contact)
{
	std::cout << "First Name: " << contact.first << std::endl;
	std::cout << "Last Name: " << contact.last << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone Number: " << contact.phone << std::endl;
	std::cout << "Darkest Secret: " << contact.secret << std::endl <<std::endl;
}

void print_contact(Contact contact)
{
	std::cout<<"|";
	print_column(contact.first);
	print_column(contact.last);
	print_column(contact.nickname);
	print_column(contact.phone);
	print_column(contact.secret);
	std::cout << std::endl;
}

void print_phonebook(PhoneBook *phonebook, int index)
{
	int i = -1;
	int whitespaces;
	int j;
	if (index > 8)
		index = 8;
	while (++i < index)
	{
		whitespaces = 10 - (intlen(i+1));
		j = -1;
		while (++j < whitespaces)
			std::cout << " ";
		std::cout<< i+1;
		print_contact(phonebook->get_contact(i));
	}
	std::cout<<std::endl;
}

