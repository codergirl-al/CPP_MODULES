/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:17 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/30 17:38:39 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    // Test 1: Creating a Zombie on the heap
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    // Test 2: Creating and announcing a Zombie on the stack
    randomChump("StackZombie");

	// Test 3: Creating a horde of Zombies
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
    
    delete[] horde; // Free the allocated memory for the horde

    return 0;
}