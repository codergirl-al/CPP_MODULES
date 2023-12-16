/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:03:36 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 01:01:48 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

FixedPoint::FixedPoint() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

FixedPoint& FixedPoint::operator=(const FixedPoint &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

FixedPoint::~FixedPoint() {
	std::cout << "Destructor called" << std::endl;
}

int FixedPoint::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void FixedPoint::setRawBits(int const raw) {
	value = raw;
}
