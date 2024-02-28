/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type){
    std::cout << "A new Amateria with a " << this->_type << " was created " << std::endl;
}

AMateria::AMateria(AMateria const &copy) : _type(copy.getType()){
    std::cout << "A new Amateria with a " << this->_type << " was created " << std::endl;
}

AMateria::~AMateria(){
    std::cout << "Amateria type " << this->_type << " was created " << std::endl;
}

AMateria    &AMateria::operator=(AMateria const &rhs){
    this->_type = rhs._type;
    return (*this);
}

std::string const   &AMateria::getType(void) const{
    return (this->_type);
}

void    AMateria::use(ICharacter &target){
    (void) target; 
    std::cout << "\033[38;5;196m This function doesn't display anything \033[0m" << std::endl;
    return ;
}
