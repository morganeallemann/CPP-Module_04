/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malleman <malleman@42lausanne.ch>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:37:09 by malleman          #+#    #+#             */
/*   Updated: 2024/02/06 16:11:18 by malleman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    /* Subjects example */
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
    system("leaks Brain");
    std::cout << std::endl;
	std::cout << std::endl;
    /*---------------------------*/
    
    /* Animal's array */
    const Animal *animal[100];

    for (int i = 0; i < 100; i++){
        if (i <= 50)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int j = 0; j < 100; j++){
        delete animal[j];
    }
    /*---------------------------*/
    /* Proof or deep copy */
    Dog medor;
	Cat fifi;

	Dog &medor_ref = medor;
	Cat &fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	Dog & medor_copy_ref = medor_copy;
	Cat & fifi_copy_ref = fifi_copy;

	std::cout << std::endl << "comparing" << std::endl;
	medor.compareTo(medor_copy_ref);
	fifi.compareTo(fifi_copy_ref);
	std::cout << std::endl;
    return (0);
}