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

AMateria::AMateria(std::string const & type) : _type(type){

}

AMateria::AMateria(AMateria const &copy){
    *this = copy;
}

AMateria::~AMateria(){

}

AMateria &AMateria::operator=(AMateria const &rhs){
    this->_type = rhs._type;
    return (*this);
}

std::string const &AMateria::getType(void) const{
    return (this->_type);
}

void    AMateria::use(ICharacter& target){

}