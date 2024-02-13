/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal's default constructor was called, an WrongAnimal was created ! " << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << "WrongAnimal's surcharged constructor was called, " << this->_type << " was created !"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy){
    std::cout << "WrongAnimal's copy constructor was called, " << this->_type << " was created !"<< std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal's destructor was called, " << this->_type << " was detroyed !" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs){
    this->_type = rhs._type;
    return (*this);
}

std::string WrongAnimal::getType(void) const{
    return (this->_type);
}

void    WrongAnimal::setType(std::string type){
    this->_type = type;
}

void    WrongAnimal::makeSound(void) const{
    std::cout << "\033[92mHello I'm an animal and I can make a sound !\033[0m" << std::endl;
}
