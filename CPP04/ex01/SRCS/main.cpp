/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../INC/Animal.hpp"
#include "../INC/WrongAnimal.hpp"
#include "../INC/Dog.hpp"
#include "../INC/Cat.hpp"
#include "../INC/WrongCat.hpp"
#include "../INC/Brain.hpp"

int main(void)
{
    Animal      *zoo[4];

    int     i(0);
    std::cout << "CREATION D'UN TAB D'ANIMAUX" << std::endl;
    while (i < 4)
    {
        if (i < 2)
        {
            zoo[i] = new Cat();
            zoo[i]->getBrain()->setIdea(0, "Im a cat");
            zoo[i]->getBrain()->setIdea(1, "shut your mouse");
        }
        else
        {
            zoo[i] = new Dog();
            zoo[i]->getBrain()->setIdea(0, "Im a dogo");
            zoo[i]->getBrain()->setIdea(1, "I want wafwaffle");
        }
        i++;
    }
    i = 0;
    std::cout << "\nIDEAS DES ANIMAUX" << std::endl;
    while (i < 4)
    {
        std::cout << zoo[i]->getBrain()->getIdea(0) << std::endl;
        i++;
    }
    i = 0;
    std::cout << "\nDELETE DU TABLEAU" << std::endl;
    while (i < 4)
    {
        delete zoo[i];
        i++;
    }

    Cat         *src = new Cat;
    Cat         *cpy = new Cat;

    std::cout << "\nTEST DE COPY : " << std::endl;
    src->getBrain()->setIdea(0, "Im a cat");
    src->getBrain()->setIdea(1, "shut your mouse");
    *cpy = *src;
    std::cout << cpy->getBrain()->getIdea(1) << std::endl;
    std::cout << cpy->getType() << std::endl;
    cpy->makeSound();
    i = 0;
    std::cout << "\nSUP DE SRC" << std::endl;
    delete src;
    std::cout << "\nCPY EXISTE TOUJOURS" << std::endl;
    std::cout << cpy->getBrain()->getIdea(1) << std::endl;
    std::cout << cpy->getType() << std::endl;
    cpy->makeSound();
    delete cpy;
    return (0);
}

