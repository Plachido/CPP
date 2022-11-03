#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>

class Contact{
public:
	std::string first;
	std::string last;
	std::string nickname;
	std::string phone;
	std::string secret;
	void initContact(std::string f, std::string l, std::string nick, std::string p, std::string s);
};

class PhoneBook{
private:
	Contact contacts[8];
public:
	void addContact(Contact contact, int index);
	Contact get_contact(int index);
};
int strlen(std::string string);
int intlen(int num);
int semi_atoi(std::string string);


//print
void print_column (std::string string);
void print_phonebook(PhoneBook *phonebook, int index);
void print_detail(Contact contact);
void print_contact(Contact contact);

#endif