/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/25 17:44:01 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "main.hpp"

class Phonebook {
private:
	int index;
	Contact phonebook[8];
public:
	Phonebook();

	void startup();
	void add();
	Contact getContact(int index);

	std::string getfirstName(int index);
	std::string getlastName(int index);
	std::string getNickname(int index);
	std::string getPhoneNumber(int index);
	std::string getDarkestSecret(int index);
	~Phonebook();
};

#endif