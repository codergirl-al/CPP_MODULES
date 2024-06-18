/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 20:20:13 by apeposhi          #+#    #+#             */
/*   Updated: 2024/04/24 14:26:15 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(const std::string& type);
    const std::string& getType() const;
    void setType(const std::string& newType);
    ~Weapon():
};

#endif
