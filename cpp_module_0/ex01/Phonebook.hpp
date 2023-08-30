/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:53 by apeposhi          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/08/26 22:33:27 by apeposhi         ###   ########.fr       */
=======
/*   Updated: 2023/08/26 16:52:29 by apeposhi         ###   ########.fr       */
>>>>>>> 1779eaa330a32a10ab29840a0f9006fc99ffb294
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

<<<<<<< HEAD
BEST	std::string getfirstName(int index);
	std::string getlastName(int index);
	std::string getNickname(int index);
	std::string getPhoneNumber(int index);
	std::string getDarkestSecret(int index);
=======
>>>>>>> 1779eaa330a32a10ab29840a0f9006fc99ffb294
	~Phonebook();
};

#endif