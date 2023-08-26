/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:00:53 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/26 14:52:57 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main() {
	std::string input;
	Phonebook phonebook;

	phonebook.startup();
	while (std::getline(std::cin, input))
	{
		if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "EXIT")
			exit(0);
		phonebook.startup();
	}
	return 0;
}
