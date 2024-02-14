/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
    
    private :
        std::string _ideas[100];

    public :
        /* Constructor */
        Brain();

        /* Copy constructor */
        Brain(Brain const &copy);

        /* Destructor */
        ~Brain();

        /* Surcharged operator */
        Brain &operator=(Brain const &rhs);

        /* Methodes */
        
        /* Getter */
        std::string getIdeas(void);

        /* Setter */
        void    setIdeas(std::string ideas);

};

#endif