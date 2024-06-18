/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:35:13 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/13 18:22:46 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }

    for (int i = 1; i < argc; ++i) {
        std::string current = argv[i];
        int length = current.length();
        for (int j = 0; j < length; j++)
            std::cout << (char)std::toupper(current[j]);
        std::cout << " ";
    }
    std::cout << std::endl;
    return (0);
}
