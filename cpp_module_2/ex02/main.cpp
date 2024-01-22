`/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:15:25 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/24 17:46:38 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    // Create instances for testing
    FixedPoint a(12.34f);
    FixedPoint b(-12.34f);
    FixedPoint c(50);
    FixedPoint d(50.50f);

    // Test comparison operators
    std::cout << "Testing comparison operators:" << std::endl;
    std::cout << "a > b: " << (a > b ? "true" : "false") << std::endl;
    std::cout << "a < c: " << (a < c ? "true" : "false") << std::endl;
    std::cout << "c >= d: " << (c >= d ? "true" : "false") << std::endl;
    std::cout << "d <= a: " << (d <= a ? "true" : "false") << std::endl;
    std::cout << "b == FixedPoint(-12.34f): " << (b == FixedPoint(-12.34f) ? "true" : "false") << std::endl;
    std::cout << "c != FixedPoint(50): " << (c != FixedPoint(50) ? "true" : "false") << std::endl;

    // Test arithmetic operators
    std::cout << "\nTesting arithmetic operators:" << std::endl;
    std::cout << "c + a: " << (c + a) << std::endl;
    std::cout << "c - a: " << (c - a) << std::endl;
    std::cout << "a * d: " << (a * d) << std::endl;
    std::cout << "c / d: " << (c / d) << std::endl;

    // Test increment/decrement operators
    std::cout << "\nTesting increment/decrement operators:" << std::endl;
    std::cout << "++a: " << (++a) << std::endl;
    std::cout << "a++: " << (a++) << std::endl;
    std::cout << "--d: " << (--d) << std::endl;
    std::cout << "d--: " << (d--) << std::endl;

    // Test min/max functions
    std::cout << "\nTesting min/max functions:" << std::endl;
    std::cout << "min(a, b): " << FixedPoint::min(a, b) << std::endl;
    std::cout << "max(c, d): " << FixedPoint::max(c, d) << std::endl;

    return 0;
}
