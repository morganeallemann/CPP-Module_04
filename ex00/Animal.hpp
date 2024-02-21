/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal {

    private :

    protected :
        std::string _type;

    public :
        /* Constructor */
        Animal();
        Animal(std::string type);
        /* Copy constructor */
        Animal(Animal const &copy);
        /* Destructor */
        virtual ~Animal();
        /* Surcharged operator */
        Animal &operator=(Animal const &rhs);
        /* Getter */
        std::string getType(void) const;
        /* Setter */
        void    setType(std::string type);
        /* Member functions */
        virtual void    makeSound(void) const;

};

#endif
