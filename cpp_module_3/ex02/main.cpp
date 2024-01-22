/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:11:25 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 04:27:20 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main() {
    // Test 1: Creating and Using a FragTrap
    FragTrap fragTrap1("FT1");
    fragTrap1.attack("Enemy1");
    fragTrap1.takeDamage(20);
    fragTrap1.beRepaired(15);
    fragTrap1.highFivesGuys();

    // Test 2: Taking More Damage Than Hit Points
    FragTrap fragTrap2("FT2");
    fragTrap2.takeDamage(150); // More than maximum hit points
    fragTrap2.beRepaired(50);  // Repairing after heavy damage

    // Test 3: Repairing Beyond Max Hit Points
    FragTrap fragTrap3("FT3");
    fragTrap3.beRepaired(200); // Repairing beyond maximum hit points

    // Test 4: Multiple Attacks and Repairs
    FragTrap fragTrap4("FT4");
    fragTrap4.attack("Enemy2");
    fragTrap4.takeDamage(30);
    fragTrap4.beRepaired(20);
    fragTrap4.attack("Enemy3");
    fragTrap4.highFivesGuys();

    // Test 5: Destruction of FragTraps
    // This will be automatically tested when the objects go out of scope

    return 0;
}
