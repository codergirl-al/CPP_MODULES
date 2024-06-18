/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:57:00 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/24 19:43:35 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <LEVEL>\n";
        return 1;
    }

    Harl harl;
    harl.complain(argv[1]);

    return 0;
}