/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:03:24 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/23 19:04:31 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook() {};

Phonebook::~Phonebook() {};

void startup(void) {
	std::cout << "==========P-H-O-N-E-B-O-O-K==========" << std::endl;
	std::cout << "Enter a command: ADD | SEARCH | EXIT " << std::endl;
}

void Phonebook::create_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret) {
    phonebook[index].assign_contact_data(first_name, last_name, nickname, phone_number, darkest_secret);
}

Contact Phonebook::get_contact(int index)
{
	return phonebook[index];
}

std::string	Phonebook::get_first_name(int index)
{
	return phonebook[index].get_first_name();
}

std::string	Phonebook::get_last_name(int index)
{
	return phonebook[index].get_last_name();
}

std::string	Phonebook::get_nickname(int index)
{
	return phonebook[index].get_nickname();
}

std::string	Phonebook::get_phone_number(int index)
{
	return phonebook[index].get_phone_number();
}

std::string Phonebook::get_darkest_secret(int index) {
    return phonebook[index].get_darkest_secret();
}

