/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:21 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/22 17:06:17 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " is destroyed." << std::endl;
}

void Zombie::announce(void) {   
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

Zombie* zombieHorde(int n, std::string name) {
    Zombie* horde = new Zombie[n];
 
    for (int i = 0; i < n; ++i) {
        horde[i] = Zombie(name);
    }
    return horde;
}

void randomChump(std::string name) {
    Zombie random(name);
    random.announce();
}
