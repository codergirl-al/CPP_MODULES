/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:19 by apeposhi          #+#    #+#             */
/*   Updated: 2023/08/29 12:43:42 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
    std::string name;

public:
    Zombie(std::string name);
    ~Zombie();
    
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif