/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:00:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/25 16:14:32 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main() {
	std::string input;
	Phonebook phonebook;

	phonebook.startup();
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			phonebook.add();
		// else if (input == "SEARCH")
			// phone_book.search();
		else if (input == "EXIT")
			exit(0);
		phonebook.startup();
	}
	return 0;
}
