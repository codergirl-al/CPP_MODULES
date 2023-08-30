/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:12:26 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/26 14:03:26 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::print_contact(void) const {
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->darkestSecret << std::endl;
}

void Contact::setParameter(const std::string param, const std::string input) {
    if (param == "firstName") {
        firstName = input;
    } else if (param == "lastName") {
        lastName = input;
    } else if (param == "nickname") {
        nickname = input;
    } else if (param == "phoneNumber") {
        phoneNumber = input;
    } else if (param == "darkestSecret") {
        darkestSecret = input;
    } else {
        std::cout << "Invalid parameter provided." << std::endl;
    }
}

std::string Contact::getFirstName() const {
	return firstName;
}

std::string Contact::getLastName() const {
	return lastName;
}

std::string Contact::getNickname() const {
	return nickname;
}

std::string Contact::getPhoneNumber() const {
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const {
	return darkestSecret;
}
