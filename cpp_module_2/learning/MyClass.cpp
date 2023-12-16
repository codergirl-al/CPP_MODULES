/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyClass.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 00:28:52 by apeposhi          #+#    #+#             */
/*   Updated: 2023/11/18 13:49:11 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass() : data(new int(0)) {
	std::cout << "Default constructor called" << std::endl;
}

MyClass::MyClass(int value) : data(new int(value)) {
	std::cout << "Parameterized constructor called" << std::endl;
}

MyClass::MyClass() {
	//deez nutz
};