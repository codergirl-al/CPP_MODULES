/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 05:23:09 by apeposhi          #+#    #+#             */
/*   Updated: 2024/06/06 15:05:32 by apeposhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
    for (int i = 0; i < _maxMateria; ++i) {
        _materias[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &other) {
    for (int i = 0; i < _maxMateria; i++)
        _materias[i] = NULL;
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other) {
    if (this != &other) {
        clearMaterias();
        for (int i = 0; i < _maxMateria; ++i) {
            if (other._materias[i]) {
                _materias[i] = other._materias[i]->clone();
            } else {
                _materias[i] = NULL;
            }
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    clearMaterias();
}

void MateriaSource::learnMateria(AMateria* m) {
    for (int i = 0; i < _maxMateria; ++i) {
        if (!_materias[i]) {
            _materias[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < _maxMateria; ++i) {
        if (_materias[i] && _materias[i]->getType() == type) {
            return _materias[i]->clone();
        }
    }
    return NULL;
}

void MateriaSource::clearMaterias() {
    for (int i = 0; i < _maxMateria; ++i) {
        delete _materias[i];
        _materias[i] = NULL;
    }
}
