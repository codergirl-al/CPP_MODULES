/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:40:50 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 04:43:53 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called." << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
