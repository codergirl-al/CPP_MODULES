/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:25:19 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:30:32 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    virtual ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
