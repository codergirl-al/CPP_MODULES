/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:23:46 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:23:53 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include <string>
#include "AMateria.hpp"

class IMateriaSource {
public:
    virtual ~IMateriaSource() {}

    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const &type) = 0;
};

#endif
