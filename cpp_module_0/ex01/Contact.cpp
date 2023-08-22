/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:12:26 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/22 19:24:17 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::print_contact(void) const {
	std::cout << "First name: " << this->first_name << std::endl;
	std::cout << "Last name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phone_number << std::endl;
	std::cout << "Darkest secret: " << this->darkest_secret << std::endl;
}

void Contact::create_contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_number, std::string darkest_secret) {
	first_name = first_name;
	last_name = last_name;
	nickname = nickname;
	phone_number = phone_number;
	darkest_secret = darkest_secret;
}

std::string Contact::get_first_name() const {
	return first_name;
}

std::string Contact::get_last_name() const {
	return last_name;
}

std::string Contact::get_nickname() const {
	return nickname;
}

std::string Contact::get_phone_number() const {
	return phone_number;
}

std::string Contact::get_darkest_secret() const {
	return darkest_secret;
}
