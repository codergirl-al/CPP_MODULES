/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:15:22 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/24 17:00:22 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

#include <iostream>

class FixedPoint {
private:
	int					value;
	static const int	fractionalBits = 8;
public:
	FixedPoint();
	FixedPoint(int integerPart);
	FixedPoint(float floatingPart);
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

	// Arithmetic operators
	FixedPoint operator+(const FixedPoint& other) const;
	FixedPoint operator-(const FixedPoint& other) const;
	FixedPoint operator*(const FixedPoint& other) const;
	FixedPoint operator/(const FixedPoint& other) const;

	FixedPoint& operator++();
    FixedPoint operator++(int);
    FixedPoint& operator--();
    FixedPoint operator--(int);
	
	static const FixedPoint& min(const FixedPoint& a, const FixedPoint& b);	
	static const FixedPoint& max(const FixedPoint& a, const FixedPoint& b);	

	friend std::ostream& operator<<(std::ostream& os, const FixedPoint& fp);
};

#endif