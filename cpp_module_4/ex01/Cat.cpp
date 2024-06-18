/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:41:03 by apeposhi          #+#    #+#             */
/*   Updated: 2024/05/01 12:58:36 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        Animal::operator=(other);
        *brain = *other.brain;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
