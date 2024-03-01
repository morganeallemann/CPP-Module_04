/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>
#include <string>

class Character : public ICharacter{
    private:
        std::string _name;
        AMateria *_materia[4];

    public:
        /* CONSTRUCTOR */
        Character(std::string name);
        /* COPY CONSTRUCTOR */
        Character(Character const &copy);
        /* DESTRUCTOR */
        virtual ~Character();
        /* SURCHARGED OPERATOR */
        Character &operator=(Character const &rhs);
        /* MEMBER FUNCTIONS */
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
        AMateria	*getMateriaFromInventory(int idx);
};

#endif
