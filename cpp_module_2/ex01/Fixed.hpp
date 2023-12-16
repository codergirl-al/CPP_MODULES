/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 01:49:58 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 02:27:32 by apeposhi         ###   ########.fr       */
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

	friend std::ostream& operator<<(std::ostream& os, const FixedPoint& fp);
};

#endif