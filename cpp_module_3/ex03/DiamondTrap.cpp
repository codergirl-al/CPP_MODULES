/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 01:03:49 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 04:33:09 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name) {
    std::cout << "DiamondTrap " << _name << " constructed.\n";
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " destructed.\n";
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap name: " << _name << "\n";
    std::cout << "ClapTrap name: " << ClapTrap::_name << "\n";
}
