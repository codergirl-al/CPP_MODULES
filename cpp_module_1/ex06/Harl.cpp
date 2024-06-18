/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:56:56 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/24 19:38:13 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void Harl::info() {
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void Harl::warning() {
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n";
}

void Harl::error() {
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(const std::string& level) {
    int levelInt;

    if (level == "DEBUG") levelInt = 1;
    else if (level == "INFO") levelInt = 2;
    else if (level == "WARNING") levelInt = 3;
    else if (level == "ERROR") levelInt = 4;
    else {
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        return;
    }

    switch (levelInt) {
        case 1: debug();
        // Fallthrough intended to cascade the output
        case 2: info();
        // Fallthrough intended to cascade the output
        case 3: warning();
        // Fallthrough intended to cascade the output
        case 4: error();
        default: break;
    }
}