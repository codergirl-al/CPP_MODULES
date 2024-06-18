/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:27:54 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/23 15:17:58 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	// Declaration and Initialization
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	// Print memory addresses
	std::cout << "The memory address of the string variable: " << &str << std::endl;
	std::cout << "The memory address held by stringPTR: " << &stringPTR << std::endl;
	std::cout << "The memory address of the string variable: " << &stringREF << std::endl;

	// Values
	std::cout << "String value: " << str << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	
	return (0);
}