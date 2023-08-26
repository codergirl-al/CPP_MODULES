/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/26 16:52:29 by apeposhi         ###   ########.fr       */
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

	~Phonebook();
};

#endif