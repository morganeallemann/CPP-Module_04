/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
    protected:
        std::string   _type;
    
    public:
        /* CONSTRUCTOR */
        AMateria(std::string const & type);
        /* COPY CONSTRUCTOR */
        AMateria(AMateria const &copy);
        /* DESTRUCTOR */
        virtual ~AMateria();
        /* SURCHARGED OPERATOR */
        AMateria &operator=(AMateria const &rhs);
        /* MEMBER FUNCTIONS */
        std::string const & getType(void) const; //Returns the materia type
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);
};

#endif 
