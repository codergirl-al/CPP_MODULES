/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:03:24 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/14 15:00:15 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iomanip>

Phonebook::Phonebook() {};

Phonebook::~Phonebook() {};

void Phonebook::getContact(int index)
{
	std::cout << "\n=====================================";
	std::cout << "\nFirst name: " << phonebook[index].getFirstName();
	std::cout << "\nLast name: " << phonebook[index].getLastName();
	std::cout << "\nNickname: " << phonebook[index].getNickname();
	std::cout << "\nPhone number: " << phonebook[index].getPhoneNumber();
	std::cout << "\nDarkest secret: " << phonebook[index].getDarkestSecret();
	std::cout << "\n=====================================\n";
}

void Phonebook::startup(void) {
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

std::string Phonebook::getUserInput() {
    std::string input;

    do {
        std::getline(std::cin, input);
        if (input.empty())
            std::cout << "Input cannot be empty! Try again." << std::endl;
    } while (input.empty());

    return (input);
}

std::string Phonebook::parseContent(std::string text) {
    if (text.length() > 10)
        return text.substr(0, 9) + ".";
    return (text);
}

void Phonebook::displayContact(int index) {
    std::cout << std::right << std::setw(10) << index + 1 << " | ";
    std::cout << std::right << std::setw(10) << parseContent(phonebook[index].getFirstName()) << " | ";
    std::cout << std::right << std::setw(10) << parseContent(phonebook[index].getLastName()) << " | ";
    std::cout << std::right << std::setw(10) << parseContent(phonebook[index].getNickname()) << std::endl;
}

int Phonebook::getContactByIndex() {
    std::string input;
	int index;
    bool isValid;

    do {
        std::getline(std::cin, input);
		index = std::stoi(input);
		if (phonebook[index].getFirstName() == "")
			isValid = 1;
        if (!isValid)
            std::cout << "Wrong index. Try again.\n";
    } while (!isValid);

    return (index);
}

void Phonebook::search() {
    int index;

    std::cout << std::endl;
    if (phonebook[0].getFirstName() == "") {
        std::cout << "There are no contacts in the phonebook.\n";
        return;
    }

    for (int i = 0; i < 8; i++) {
        if (!phonebook[i].getFirstName().empty())
            displayContact(i);
    }
    std::cout << "\nEnter the contact's index: \n";
    index = getContactByIndex();
    if (index >= 0 && index < 8)
        getContact(index-1);
    else
        std::cout << "Invalid index.\n";
}