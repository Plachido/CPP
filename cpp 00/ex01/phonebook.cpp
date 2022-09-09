/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:56:25 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/08 20:06:49 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

static int add(PhoneBook *phonebook, int index)
{
	int ok = 1;
	int i = -1
			;

	std::string input[5];
	std::cout << "Name: " << std::flush;
	std::getline(std::cin, input[0]);
	std::cout << "Last name: ";
	std::getline(std::cin, input[1]);
	std::cout << "Nickname: ";
	std::getline(std::cin, input[2]);
	std::cout << "Phone Number: ";
	std::getline(std::cin, input[3]);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, input[4]);
	std::cout << std::endl;
	while (++i < 5)
	{
		if (input[i] == "")
			ok = 0;
	}
	if (ok)
	{
		Contact contact;
		contact.initContact(input[0], input[1], input[2], input[3], input[4]);
		phonebook->addContact(contact, index);
		return ++index;
	}
	else
		std::cout << "Empty Field! Contact will not be saved." << std::endl << std::endl;
	return index;
}


static void search(PhoneBook *phonebook, int index)
{
	print_phonebook(phonebook, index);
	std::string new_index;
	Contact contact;
	if (index > 0)
	{
		std::cout << "Desired index: ";
		std::getline(std::cin, new_index);
		int int_new_index = semi_atoi(new_index);
		if ((1 <= int_new_index) & (int_new_index <= index%9))
		{
			contact = phonebook->get_contact(semi_atoi(new_index)-1);
			print_detail(contact);
		}
		else
			std::cout<<"Bad index entered."<<std::endl;
	}
	else
		std::cout<<"Nothing to show.";

	std::cout << std::endl;

}

int main() {
	PhoneBook phonebook;
	int index = 0;
	std::string input;
	while (1)
	{
		std::cout<< "ADD, SEARCH or EXIT?" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			index = add(&phonebook, index);
		else if (input == "SEARCH")
			search(&phonebook, index);
		else if (input == "EXIT")
			return 0;
		else
			std::cout << "Bad choice, try again!" << std::endl;

	}
}
