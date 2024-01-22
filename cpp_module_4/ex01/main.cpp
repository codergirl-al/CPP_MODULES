/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:39:21 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 04:48:27 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main() {
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) {
        std::cout << animals[i]->getType() << " makes a sound: ";
        animals[i]->makeSound();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    Dog originalDog;
    Dog copyDog = originalDog;

    Cat originalCat;
    Cat copyCat(originalCat);

    return 0;
}

