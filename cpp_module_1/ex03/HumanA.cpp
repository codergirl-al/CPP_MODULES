/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:20:05 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/24 14:30:02 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
