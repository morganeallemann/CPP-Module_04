/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
    private:

    public:
        /* CONSTRUCTOR */
        Cure();
        /* COPY CONSTRUCTOR */
        Cure(Cure const &copy);
        /* DESTRUCTOR */
        ~Cure();
        /* SURCHARGED OPERATOR */
        Cure &operator=(Cure const &rhs);
        /* MEMBER FUNCTIONS */
        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);

};

#endif 