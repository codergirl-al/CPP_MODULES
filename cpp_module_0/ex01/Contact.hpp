/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:07:24 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/25 17:33:36 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "main.hpp"

class Contact {
private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkestSecret;
	std::string phoneNumber;
public:
	Contact();
	~Contact();
	
	void print_contact(void) const;
	void setParameter(std::string param, std::string input);

	std::string getfirstName() const;
	std::string getlastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};

#endif