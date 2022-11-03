/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_functions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plpelleg <plpelleg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:57:46 by plpelleg          #+#    #+#             */
/*   Updated: 2022/09/08 19:39:11 by plpelleg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void Contact::initContact(std::string f, std::string l, std::string nick, std::string p, std::string s){
	first = f;
	last = l;
	nickname = nick;
	phone = p;
	secret = s;
}

void PhoneBook::addContact(Contact contact, int index)
{
	contacts[index%8] = contact;
}

Contact PhoneBook::get_contact(int index)
{
	return contacts[index];
}
