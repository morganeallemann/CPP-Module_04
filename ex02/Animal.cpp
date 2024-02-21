/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal's default constructor was called, an Animal was created ! " << std::endl;
}

Animal::Animal(std::string type) : _type(type){
    std::cout << "Animal's surcharged constructor was called, " << this->_type << " was created !"<< std::endl;
}

Animal::Animal(Animal const &copy){
    std::cout << "Animal's copy constructor was called, " << this->_type << " was created !"<< std::endl;
    *this = copy;
}

Animal::~Animal(){
    std::cout << "Animal's destructor was called, " << this->_type << " was detroyed !" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs){
    this->_type = rhs._type;
    return (*this);
}

std::string Animal::getType(void) const{
    return (this->_type);
}

void    Animal::setType(std::string type){
    this->_type = type;
}

void    Animal::makeSound(void) const{
    std::cout << "\033[92mHello I'm an animal and I can make a sound !\033[0m" << std::endl;
}
