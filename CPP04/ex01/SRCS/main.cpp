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
    Animal  *tab[6];
    Brain   *everyCatsBrain;
    Brain   *everyDogsBrain;
    int     i(0);

    everyCatsBrain->setIdea(0, "Im a cat");
    everyCatsBrain->setIdea(1, "shut your mouse");
    everyDogsBrain->setIdea(0, "Im a dogo");
    everyDogsBrain->setIdea(1, "I want wafwaffle");
    while (i < 3)
    {
        tab[i] = new Cat();
        *tab[i]->setBrain(*everyCatsBrain);
        i++;
    }
    while (i < 6)
    {
        tab[i] = new Dog();
        *tab[i]->setBrain(*everyDogsBrain);
        i++;
    }
    i = 0;
    while (i < 6)
    {
        std::cout << i << " : "<< *tab[i]->getBrain().getIdea(i) << std::endl;
        i++;
    }
    i = 0;
    while (i < 0)
        delete tab[i];


    return (0);
}

