/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 04:37:14 by apeposhi          #+#    #+#             */
/*   Updated: 2024/05/01 13:53:07 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
protected:
    std::string type;

public:
    AAnimal();
    virtual ~AAnimal();

    virtual void makeSound() const = 0;
    std::string getType() const;
};

#endif
