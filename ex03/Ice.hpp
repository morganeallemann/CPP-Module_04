/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
    private:

    public:
        /* CONSTRUCTOR */
        Ice();
        /* COPY CONSTRUCTOR */
        Ice(Ice const &copy);
        /* DESTRUCTOR */
        ~Ice();
        /* SURCHARGED OPERATOR */
        Ice &operator=(Ice const &rhs);
        /* MEMBER FUNCTIONS */
        virtual AMateria* clone(void) const;
        virtual void use(ICharacter& target);

};

#endif 