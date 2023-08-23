/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:01:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/23 18:56:14 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class Phonebook {
private:
	Contact phonebook[8];
public:
	Phonebook();
	
	void startup();
	void create_contact(int index, std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	Contact get_contact(int index);

	std::string get_first_name(int index);
	std::string get_last_name(int index);
	std::string get_nickname(int index);
	std::string get_phone_number(int index);
	std::string get_darkest_secret(int index);
	~Phonebook();
};

#endif