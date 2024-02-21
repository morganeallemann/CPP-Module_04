/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("New cat"){
    this->_type = "Cat";
   
    std::cout << "Cat default constructor was called, a new Cat was created ! " << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal("New cat"){
    std::cout << "Cat copy constructor was called, a new Cat was created ! " << std::endl;
    this->_brain = new Brain(*copy._brain);
}

Cat &Cat::operator=(Cat const &rhs){
    Animal::operator=(rhs);
    delete this->_brain;
    this->_brain = new Brain(*rhs._brain);

    return (*this);
}

Cat::~Cat(){
    delete this->_brain;
    std::cout << "Cat default constructor was called, the Cat was destroyed !" << std::endl;
}

void    Cat::makeSound(void) const{
    std::cout << "\033[38;5;216mI'm a " << this->_type << " ! Miaaaaaaaaaouuuuuuuuuuuuuuuuuuuuuuu 𓃠\033[0m" << std::endl;
}

Brain* Cat::getBrain(void) const{
    return (this->_brain);
}