/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource{
    private:
        AMateria *_materia[4];

    public:
        /* CONSTRUCTOR */
        MateriaSource();
        /* COPY CONSTRUCTOR */
        MateriaSource(MateriaSource const &copy);
        /* DESTRUCTOR */
        virtual ~MateriaSource();
        /* SURCHARGED OPERATOR */
        MateriaSource &operator=(MateriaSource const &rhs);
        /* MEMBER FUNCTIONS */
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif 