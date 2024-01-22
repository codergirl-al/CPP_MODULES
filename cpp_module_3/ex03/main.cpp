/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:11:25 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 00:25:22 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {
    // Test 1: Creating and Using a FragTrap
    FragTrap fragTrap1("FT1");
    fragTrap1.attack("Enemy1");
    fragTrap1.takeDamage(40);
    fragTrap1.beRepaired(30);
    fragTrap1.highFivesGuys();

    // Test 2: Testing the limits of takeDamage and beRepaired
    FragTrap fragTrap2("FT2");
    fragTrap2.takeDamage(120);  // More than hit points
    fragTrap2.beRepaired(150);  // Repairing more than the maximum hit points

    // Test 3: Multiple FragTraps
    FragTrap fragTrap3("FT3");
    fragTrap3.attack("Enemy2");

    FragTrap fragTrap4("FT4");
    fragTrap4.highFivesGuys();

    // Test 4: Destruction of FragTraps
    // This will be automatically tested when the objects go out of scope

    return 0;
}
