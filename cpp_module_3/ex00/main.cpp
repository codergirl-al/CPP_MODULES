/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 04:41:03 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/18 04:54:35 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap ct1("CT1");
    ClapTrap ct2("CT2");

    ct1.attack("Enemy1");
    ct2.attack("Enemy2");

    ct1.takeDamage(4);
    ct2.takeDamage(6);

    ct1.beRepaired(5);
    ct2.beRepaired(3);

    return 0;
}
