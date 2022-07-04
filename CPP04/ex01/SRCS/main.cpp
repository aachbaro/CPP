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
    Animal      *cpy = new Cat();

    int     i(0);

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
    while (i < 4)
    {
        std::cout << zoo[i]->getBrain()->getIdea(0) << std::endl;
        i++;
    }
    std::cout << "\ntest de copy : " << std::endl;
    *cpy = *zoo[1];
    std::cout << cpy->getBrain()->getIdea(1) << std::endl;
    std::cout << cpy->getType() << std::endl;
    cpy->makeSound();
    i = 0;
    std::cout << "delete du tableau" << std::endl;
    while (i < 4)
    {
        delete zoo[i];
        i++;
    }
    return (0);
}

