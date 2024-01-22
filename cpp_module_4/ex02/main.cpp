/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:39:21 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:05:13 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    Dog dog;
    Cat cat;

    std::cout << dog.getType() << " makes a sound: ";
    dog.makeSound();

    std::cout << cat.getType() << " makes a sound: ";
    cat.makeSound();

    return 0;
}


