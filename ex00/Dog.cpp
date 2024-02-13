/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("New Dog"){
    this->_type = "Dog";
    std::cout << "Dog default constructor was called, a new Dog was created ! " << std::endl;
}

Dog::Dog(Dog const &copy) : Animal("New Dog"){
    *this = copy;
    std::cout << "Dog copy constructor was called, a new Dog was created ! " << std::endl;
}

Dog &Dog::operator=(Dog const &rhs){
    this->_type = rhs._type;
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog default constructor was called, the Dog was destroyed !" << std::endl;
}

void    Dog::makeSound(void) const{
    std::cout << "\033[95mI'm a " << this->_type << " ! Aouf Aouf 𓃫  \033[0m" << std::endl;
}
