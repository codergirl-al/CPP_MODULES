/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:42:09 by apeposhi          #+#    #+#             */
/*   Updated: 2023/10/10 23:08:54 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

bool replaceAndSave(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream fileIn(filename);
    if (!fileIn.is_open()) {
        std::cerr << "Error: Cannot open file: " << filename << std::endl;
        return (false);
    }
    std::string content((std::istreambuf_iterator<char>(fileIn)), std::istreambuf_iterator<char>());
    fileIn.close();

    size_t position = 0;
    while ((position = content.find(s1, position)) != std::string::npos) {
        content.erase(position, s1.length());
        content.insert(position, s2);
        position += s2.length();
    }

    std::ofstream fileOut(filename + ".replace");
    if (!fileOut.is_open()) {
        std::cerr << "Error: Cannot create output file: " << filename << ".replace" << std::endl;
        return (false);
    }

    fileOut << content;
    fileOut.close();
    return (true);
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <filename> <string1> <string2>" << std::endl;
        return (0);
    }
    std::string filename(argv[1]);
    std::string s1(argv[2]);
    std::string s2(argv[3]);
    
    if (s1.empty()) {
        std::cerr << "Error: String to replace (s1) must not be empty." << std::endl;
        return (1);
    }

    if (!replaceAndSave(filename, s1, s2))
        return (1);
    return (0);
}
