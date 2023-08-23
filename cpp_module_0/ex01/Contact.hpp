/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:07:24 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/23 19:00:46 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact {
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string phone_number;
public:
	Contact();
	~Contact();
	
	void assign_contact_data(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret);
	void print_contact(void) const;
	
	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
};

#endif