/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:23:09 by apeposhi          #+#    #+#             */
/*   Updated: 2024/01/22 05:23:16 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < maxMateria; ++i) {
        materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        clearMaterias();
        for (int i = 0; i < maxMateria; ++i) {
            if (other.materias[i]) {
                materias[i] = other.materias[i]->clone();
            } else {
                materias[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    clearMaterias();
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < maxMateria; ++i) {
        if (!materias[i]) {
            materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < maxMateria; ++i) {
        if (materias[i] && materias[i]->getType() == type) {
            return materias[i]->clone();
        }
    }
    return NULL;
}

void MateriaSource::clearMaterias() {
    for (int i = 0; i < maxMateria; ++i) {
        delete materias[i];
        materias[i] = NULL;
    }
}
