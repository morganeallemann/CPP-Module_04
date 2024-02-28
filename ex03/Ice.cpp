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
    std::cout << "A new ice was created " << std::endl;
}

Ice::Ice(Ice const &copy) : AMateria("ice"){
    std::cout << "A new ice was created by copie " << std::endl;
    *this = copy;
}

Ice::~Ice(){
    std::cout << "An ice was destroyed !" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs){
    (void) rhs;
    return (*this);
}

AMateria *Ice::clone(void) const {
    return (new Ice(*this));
}

void    Ice::use(ICharacter &target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
