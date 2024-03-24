/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:11:43 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:15:06 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
private:
    static const int inventorySize = 4;
    AMateria* inventory[inventorySize];
    std::string _name;

    void clearInventory();
    void copyInventory(const Character& other);

public:
    Character();
    Character(const std::string &name);
    Character(const Character &other);
    Character &operator=(const Character &other);
    virtual ~Character();

    virtual std::string const& getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
};

#endif
