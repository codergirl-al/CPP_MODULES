/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:03:24 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/25 18:14:19 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string getUserInput() {
    std::string input;

    do {
        std::cout << "Please enter a value: ";
        std::getline(std::cin, input);

        if (input.empty()) {
            std::cout << "Input cannot be empty! Try again." << std::endl;
        }
    } while (input.empty());

    return input;
}

Phonebook::Phonebook() {};

Phonebook::~Phonebook() {};

void startup(void) {
	std::cout << std::endl << "==========P-H-O-N-E-B-O-O-K==========" << std::endl;
	std::cout << "Enter a command: ADD | SEARCH | EXIT " << std::endl;
}

void Phonebook::add() {
	std::string input;
	Contact newContact;
	
	char fields[5][2][50] = {
	    {"Enter First Name: ", "firstName"},
	    {"Enter Last Name: ", "lastName"},
	    {"Enter Nickname: ", "nickname"},
	    {"Enter Phone Number: ", "phoneNumber"},
	    {"Enter Darkest Secret: ", "darkestSecret"}
	};
	for (size_t i = 0; i < 5; ++i) {
	    std::cout << fields[i][0];
	    input = getUserInput();
	    newContact.setParameter(fields[i][1], input);
	}
	if (index == 8)
		index = 0;
	phonebook[index++] = newContact;
}

Contact Phonebook::getContact(int index)
{
	return phonebook[index];
}

std::string	Phonebook::getfirstName(int index)
{
	return phonebook[index].getfirstName();
}

std::string	Phonebook::getlastName(int index)
{
	return phonebook[index].getlastName();
}

std::string	Phonebook::getNickname(int index)
{
	return phonebook[index].getNickname();
}

std::string	Phonebook::getPhoneNumber(int index)
{
	return phonebook[index].getPhoneNumber();
}

std::string Phonebook::getDarkestSecret(int index) {
    return phonebook[index].getDarkestSecret();
}

