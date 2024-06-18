/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:17 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/14 19:41:13 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    randomChump("StackZombie");

    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");
    
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }
    
    delete[] horde;

    return 0;
}