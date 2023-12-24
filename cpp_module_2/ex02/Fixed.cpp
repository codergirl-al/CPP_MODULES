/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:15:17 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/24 17:20:53 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

FixedPoint::FixedPoint() : value(0) {}

FixedPoint::FixedPoint(int integerPart) : value(integerPart << fractionalBits) {}

FixedPoint::FixedPoint(float floatingPart)
    : value(static_cast<int>(floatingPart * (1 << fractionalBits) + (floatingPart >= 0 ? 0.5 : -0.5))) {}

FixedPoint::FixedPoint(const FixedPoint &other) : value(other.value) {}

FixedPoint::~FixedPoint() {}

int FixedPoint::getRawBits(void) const {
    return value;
}

void FixedPoint::setRawBits(int const raw) {
    value = raw;
}

float FixedPoint::toFloat(void) const {
    return value / static_cast<float>(1 << fractionalBits);
}

int FixedPoint::toInt(void) const {
    return value >> fractionalBits;
}

bool FixedPoint::operator>(const FixedPoint& other) const {
    return value > other.value;
}

bool FixedPoint::operator<(const FixedPoint& other) const {
    return value < other.value;
}

bool FixedPoint::operator>=(const FixedPoint& other) const {
    return value >= other.value;
}

bool FixedPoint::operator<=(const FixedPoint& other) const {
    return value <= other.value;
}

bool FixedPoint::operator==(const FixedPoint& other) const {
    return value == other.value;
}

bool FixedPoint::operator!=(const FixedPoint& other) const {
    return value != other.value;
}

// Overloaded arithmetic operators
FixedPoint FixedPoint::operator+(const FixedPoint& other) const {
    return FixedPoint(toFloat() + other.toFloat());
}

FixedPoint FixedPoint::operator-(const FixedPoint& other) const {
    return FixedPoint(toFloat() - other.toFloat());
}

FixedPoint FixedPoint::operator*(const FixedPoint& other) const {
    return FixedPoint(toFloat() * other.toFloat());
}

FixedPoint FixedPoint::operator/(const FixedPoint& other) const {
    return FixedPoint(toFloat() / other.toFloat());
}

FixedPoint& FixedPoint::operator++() {
    value += 1;
    return *this;
}

FixedPoint FixedPoint::operator++(int) {
    FixedPoint temp(*this);
    ++(*this);
    return temp;
}

FixedPoint& FixedPoint::operator--() {
    value -= 1;
    return *this;
}

FixedPoint FixedPoint::operator--(int) {
    FixedPoint temp(*this);
    --(*this);
    return temp;
}

const FixedPoint& FixedPoint::min(const FixedPoint& a, const FixedPoint& b) {
    return (a.value < b.value) ? a : b;
}

const FixedPoint& FixedPoint::max(const FixedPoint& a, const FixedPoint& b) {
    return (a.value > b.value) ? a : b;
}

std::ostream& operator<<(std::ostream& os, const FixedPoint& fp) {
    os << fp.toFloat();
    return os;
}
