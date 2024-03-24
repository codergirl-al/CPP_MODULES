/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:10:48 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:15:30 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default") {
    for (int i = 0; i < inventorySize; i++) {
        inventory[i] = NULL;
    }
}

Character::Character(const std::string &name) : _name(name) {
    for (int i = 0; i < inventorySize; i++) {
        inventory[i] = NULL;
    }
}

Character::Character(const Character &other) {
    copyInventory(other);
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        clearInventory();
        _name = other._name;
        copyInventory(other);
    }
    return *this;
}

Character::~Character() {
    clearInventory();
}

std::string const& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < inventorySize; i++) {
        if (inventory[i] == NULL) {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < inventorySize) {
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < inventorySize && inventory[idx] != NULL) {
        inventory[idx]->use(target);
    }
}

void Character::clearInventory() {
    for (int i = 0; i < inventorySize; i++) {
        delete inventory[i];
        inventory[i] = NULL;
    }
}

void Character::copyInventory(const Character& other) {
    for (int i = 0; i < inventorySize; i++) {
        if (other.inventory[i] != NULL) {
            inventory[i] = other.inventory[i]->clone();
        } else {
            inventory[i] = NULL;
        }
    }
}
