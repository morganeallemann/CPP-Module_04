/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

}

Ice::Ice(Ice const &copy) : AMateria("ice"){
    *this = copy;
}

Ice::~Ice(){

}

Ice &Ice::operator=(Ice const &rhs){
    AMateria::operator=(rhs);
}

Ice &Ice::clone(void) const{
    const AMaterial *clone = new Ice();
    return (clone);
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target << " *" << std::endl;
}