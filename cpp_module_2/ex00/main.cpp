/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 00:03:46 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 00:59:20 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main() {
	FixedPoint a;
	std::cout << "Value of a: " << a.getRawBits() << std::endl;

	a.setRawBits(42);
	std::cout << "Value of a after setting to 42: " << a.getRawBits() << std::endl;

	FixedPoint b(a);
	std::cout << "Value of b (copy of a): " << b.getRawBits() << std::endl;

	FixedPoint c;
	c = a;
	std::cout << "Value of c after assignment from a: " << c.getRawBits() << std::endl;

	FixedPoint *d = new FixedPoint;
	d->setRawBits(100);
	std::cout << "Value of d: " << d->getRawBits() << std::endl;
	delete d;

	return(0);
}