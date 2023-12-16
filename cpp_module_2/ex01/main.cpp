/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 02:53:06 by apeposhi          #+#    #+#             */
/*   Updated: 2023/12/16 02:53:54 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main() {
    FixedPoint a(42.42f);
    std::cout << "a is " << a << std::endl;

    FixedPoint b = a.toInt();
    std::cout << "b is " << b << std::endl;

    FixedPoint c = a.toFloat();
    std::cout << "c is " << c << std::endl;

    FixedPoint d(42);
    std::cout << "d is " << d << std::endl;

    return (0);
}
