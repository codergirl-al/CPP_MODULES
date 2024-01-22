/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 05:11:25 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/18 05:24:25 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main() {
    ScavTrap st1("ST1");

    st1.attack("Enemy");
    st1.takeDamage(30);
    st1.beRepaired(40);
    st1.guardGate();

    return 0;
}
