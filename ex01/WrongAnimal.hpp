/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal {

    private :

    protected :
        std::string _type;

    public :
        /* Constructor */
        WrongAnimal();
        WrongAnimal(std::string type);
        /* Copy constructor */
        WrongAnimal(WrongAnimal const &copy);
        /* Destructor */
        ~WrongAnimal();
        /* Surcharged operator */
        WrongAnimal &operator=(WrongAnimal const &rhs);
        /* Getter */
        std::string getType(void) const;
        /* Setter */
        void    setType(std::string type);
        /* Member functions */
        void    makeSound(void) const;

};

#endif
