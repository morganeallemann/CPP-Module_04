/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    private:

    public:
        /* Constructor */
        WrongCat();
        /* Copy constructor */
        WrongCat(WrongCat const &copy);
        /* Destructor */
        virtual ~WrongCat();
        /* Surcharged operator */
        WrongCat &operator=(WrongCat const &rhs);
        /* Member functions */
        void    makeSound(void) const;

};

#endif 
