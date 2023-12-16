/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:03:42 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 00:58:30 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
#define FIXEDPOINT_HPP

class FixedPoint {
private:
	int					value;
	static const int	fractionalBits = 8;
public:
	FixedPoint(); // Default constructor
	FixedPoint(const FixedPoint &other); // Copy constructor
	FixedPoint& operator=(const FixedPoint &other); // Copy assignment
	~FixedPoint(); // Destructor

	int getRawBits(void) const;
	void setRawBits(int const raw); 
};

#endif