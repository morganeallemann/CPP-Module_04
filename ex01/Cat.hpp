/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

    private:
        Brain *_brain;

    public:
        /* Constructor */
        Cat();
        /* Copy constructor */
        Cat(Cat const &copy);
        /* Destructor */
        ~Cat();
        /* Surcharged operator */
        Cat &operator=(Cat const &rhs);
        /* Member functions */
        void    makeSound(void) const;
        /* Getter */
        std::string getBrain(void) const;
        /* Setter */
        
};

#endif 
