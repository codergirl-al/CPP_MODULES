/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:53 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/14 14:56:48 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook {
private:
	int index;
	Contact phonebook[8];
public:
	Phonebook();

	void startup();
	void add();
	void displayContact(int index);
	void search();
	std::string parseContent(std::string text);
	std::string getUserInput();
	int getContactByIndex();
	void getContact(int index);

	std::string getfirstName(int index);
	std::string getlastName(int index);
	std::string getNickname(int index);
	std::string getPhoneNumber(int index);
	std::string getDarkestSecret(int index);
	~Phonebook();
};

#endif