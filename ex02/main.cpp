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
    const Animal *animal[4];

    for (int i = 0; i < 4; i++){
        if (i < 2)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }
    for (int j = 0; j < 4; j++){
        delete animal[j];
    }
    /*---------------------------*/
    /* Proof or deep copy */
    Dog originDog;
    Cat originCat;
    Dog copyDog;
    Cat copyCat;

    originDog.makeSound();
    originCat.makeSound();
    copyDog = originDog;
    copyCat = originCat;
    originDog.getBrain()->setIdeas("I'm the original Dog !", 1);
    originCat.getBrain()->setIdeas("I'm the original Cat !", 1);

    std::cout << "Ideas of the copied Dog: " << copyDog.getBrain()->getIdeas(1) << std::endl;
    std::cout << "Ideas of the original Dog: " << originDog.getBrain()->getIdeas(1) << std::endl;
    std::cout << "Ideas of the copied Cat: " << copyCat.getBrain()->getIdeas(1) << std::endl;
    std::cout << "Ideas of the original Cat: " << originCat.getBrain()->getIdeas(1) << std::endl;

    return (0);
}