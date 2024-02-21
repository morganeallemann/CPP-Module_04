/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{

    private:
        Brain *_brain;

    public:
        /* Constructor */
        Dog();

        /* Copy constructor */
        Dog(Dog const &copy);

        /* Destructor */
        virtual ~Dog();

        /* Surcharged operator */
        Dog &operator=(Dog const &rhs);

        /* Member functions */
        void    makeSound() const;
        
        /* Getter */
        Brain* getBrain(void) const;

};

#endif 
