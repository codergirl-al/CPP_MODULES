/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:49:58 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 19:56:57 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

#include <iostream>

class FixedPoint {
private:
    int value;
    static const int fractionalBits = 8;

public:
    FixedPoint();
    explicit FixedPoint(int integerPart);
    explicit FixedPoint(float floatingPart);
    FixedPoint(const FixedPoint &other);
    ~FixedPoint();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

    // Overloaded operators
    bool operator>(const FixedPoint& other) const;
    bool operator<(const FixedPoint& other) const;
    bool operator>=(const FixedPoint& other) const;
    bool operator<=(const FixedPoint& other) const;
    bool operator==(const FixedPoint& other) const;
    bool operator!=(const FixedPoint& other) const;

    FixedPoint operator+(const FixedPoint& other) const;
    FixedPoint operator-(const FixedPoint& other) const;
    FixedPoint operator*(const FixedPoint& other) const;
    FixedPoint operator/(const FixedPoint& other) const;

    FixedPoint& operator++(); // Prefix increment
    FixedPoint operator++(int); // Postfix increment
    FixedPoint& operator--(); // Prefix decrement
    FixedPoint operator--(int); // Postfix decrement

    // Min/Max functions
    static const FixedPoint& min(const FixedPoint& a, const FixedPoint& b);
    static const FixedPoint& max(const FixedPoint& a, const FixedPoint& b);

    // Friend function for ostream
    friend std::ostream& operator<<(std::ostream& os, const FixedPoint& fp);
};

#endif
