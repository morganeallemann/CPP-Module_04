/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "Materiasource was created " << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy){
    std::cout << "Materiasource was created by copie " << std::endl;
    for (int i = 0; i < 4; i++){
        if (copy._materia[i])
            this->_materia[i] = copy._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource(){
    std::cout << "Materiasource was destroyed " << std::endl;
    for (int i = 0; i < 4; i++){
        if (this->_materia[i])
            delete this->_materia[i];
    }
}

MateriaSource   &MateriaSource::operator=(MateriaSource const &rhs){
    for (int i = 0; i < 4; i++){
        if (this->_materia[i])
            delete this->_materia[i];
        if (rhs._materia[i])
            this->_materia[i] = rhs._materia[i]->clone();
    }
    return (*this);
}

void    MateriaSource::learnMateria(AMateria *m){
    int i = 0;
    if (!m){
        std::cout << "No materia to learn" << std::endl;
        return ;
    }
    while (this->_materia[i] != NULL)
        i++;
    if (i >= 4)
        std::cout << "Materia list is full, cannot learn more materia " << std::endl;
    else{
        this->_materia[i] = m->clone();
        std::cout << "Materia type " << m->getType() << " was learned and stocked to index " << i << std::endl;
    }
    return ;
}

AMateria    *MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    std::cout << "Type unkown !" << std::endl;
    return (0);
}
