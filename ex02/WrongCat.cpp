/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("New cat"){
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor was called, a new WrongCat was created ! " << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal("New cat"){
    *this = copy;
    std::cout << "WrongCat copy constructor was called, a new WrongCat was created ! " << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs){
    this->_type = rhs._type;
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat default constructor was called, the WrongCat was destroyed !" << std::endl;
}

void    WrongCat::makeSound(void) const{
    std::cout << "\033[38;5;216mI'm a " << this->_type << " ! Miaaaaaaaaaouuuuuuuuuuuuuuuuuuuuuuu 𓃠\033[0m" << std::endl;
}
