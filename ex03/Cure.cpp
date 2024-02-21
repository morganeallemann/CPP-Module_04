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

Cure::Cure() : AMateria("Cure"){

}

Cure::Cure(Cure const &copy) : AMateria("Cure"){
    *this = copy;
}

Cure::~Cure(){

}

Cure &Cure::operator=(Cure const &rhs){
    AMateria::operator=(rhs);
}

Cure &Cure::clone(void) const{
    const AMaterial *clone = new Cure();
    return (clone);
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target << "'s wounds *" << std::endl;
}
