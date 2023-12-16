/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:49:52 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 15:24:09 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <cmath>
#include <iostream>

FixedPoint::FixedPoint() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

FixedPoint::FixedPoint(int integerPart) : value(integerPart << fractionalBits) {
	std::cout << "Inst constructor called" << std::endl;
}

FixedPoint::FixedPoint(float floatingPart) : value(static_cast<int>(round(floatingPart * (1 << fractionalBits)))) {
	std::cout << "Float constructor called" << std::endl;
}

FixedPoint::FixedPoint(const FixedPoint &other) : value(other.value) {
	std::cout << "Copy constructor called" << std::endl;
}

// FixedPoint& FixedPoint::operator=(const FixedPoint &other) {
//     if (this != &other) {
//         this->value = other.value;
//         std::cout << "Copy assignment operator called" << std::endl;
//     }
//     return *this;
// }

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

float FixedPoint::toFloat(void) const {
	return (static_cast<float>(value) / (1 << fractionalBits));
}

int FixedPoint::toInt(void) const {
	return (value >> fractionalBits);
}

std::ostream& operator<<(std::ostream& os, const FixedPoint& fp) {
	if (fp.value < 0)
		os << '-';
	os << fp.toInt() << '.';
	int fractional_part = std::abs(fp.value % (1 <<fp.fractionalBits)) * 100 / (1 << fp.fractionalBits);
	if (fractional_part < 10)
		os << '0';
	os << fractional_part;
	return (os);
}
