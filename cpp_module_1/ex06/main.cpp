/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:57:00 by apeposhi          #+#    #+#             */
/*   Updated: 2023/10/22 22:16:38 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getLevel(const std::string& level) {
    if(level == "DEBUG") return 1;
    if(level == "INFO") return 2;
    if(level == "WARNING") return 3;
    if(level == "ERROR") return 4;
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <LEVEL>\n";
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}