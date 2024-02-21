/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = "New Brain :-D";
    }
    std::cout << "Default constructor's Brain was called " << std::endl;
}

Brain::Brain(Brain const &copy){
    std::cout << "Copy constructor's Brain was called " << std::endl;
    *this = copy;
}

Brain::~Brain(){
    std::cout << "Destructor's Brain was called " << std::endl;
}

Brain   &Brain::operator=(Brain const &rhs){
    for (int i = 0; i < 100; i++){
        this->_ideas[i] = rhs._ideas[i];
    }
    return (*this);
}

std::string const   &Brain::getIdeas(int index) const{
   return (this->_ideas[index]);
}

void    Brain::setIdeas(const std::string ideas, int index){
    this->_ideas[index] = ideas;
}
