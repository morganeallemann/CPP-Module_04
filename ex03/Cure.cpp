/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
    std::cout << "A new Cure was created " << std::endl;
}

Cure::Cure(Cure const &copy) : AMateria("cure"){
    std::cout << "A new Cure was created by copie " << std::endl;
    *this = copy;
}

Cure::~Cure(){
    std::cout << "An Cure was destroyed !" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs){
    (void) rhs;
    return (*this);
}

AMateria *Cure::clone(void) const {
    return (new Cure(*this));
}

void    Cure::use(ICharacter &target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
