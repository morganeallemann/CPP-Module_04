/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name) : _name(name){
    std::cout << "A new Character named " << this->_name << " was created" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

Character::Character(Character const &copy){
    this->_name = copy._name;
    std::cout << "A new Character named " << this->_name << " was created by copie " << std::endl;
    for (int i = 0; i < 4; i++){
        if (copy._materia[i])
            this->_materia[i] = copy._materia[i]->clone();
        else
            this->_materia[i] = NULL;
    }
}
Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (this->_materia[i])
            delete this->_materia[i];
    }
    std::cout << "Character " << this->_name << " was destroyed " << std::endl;
}

Character   &Character::operator=(Character const &rhs){
    for (int i = 0; i < 4; i++){
        if (this->_materia[i])
            delete this->_materia[i];
        if (rhs._materia[i])
            this->_materia[i] = rhs._materia[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName(void) const{
    return (this->_name);
}

void    Character::equip(AMateria *m){
    int i = 0;
    if (!m){
        std::cout << "No materia insert, please insert one " << std::endl;
        return ;
    }
    while (i < 4 && this->_materia[i] != NULL)
        i++;
    if (i >= 4)
        std::cout << "Materia list is full, you cannot add more materia " << std::endl;
   
    else{
        this->_materia[i] = m; 
        std::cout << "Materia type " << this->_materia[i]->getType() << " was add on materia list, index " << i << std::endl;
    }
}

void    Character::unequip(int idx){
    if (idx > 3 || idx < 0)
        std::cout << "Index is not available " << std::endl;
    else if (!this->_materia[idx])
        std::cout << "This index is already empty " << std::endl;
    else{
        std::cout << "Materia " << this->_materia[idx]->getType() << " was unequipped at idx " << idx << std::endl;
        this->_materia[idx] = NULL;
    }
    return ;
}

void    Character::use(int idx, ICharacter &target){
    if (idx > 3 || idx < 0)
        std::cout << "Index is not available " << std::endl;
    else if (this->_materia[idx] == NULL)
        std::cout << "This index is empty " << std::endl;
    else
        this->_materia[idx]->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_materia)[idx];
}
