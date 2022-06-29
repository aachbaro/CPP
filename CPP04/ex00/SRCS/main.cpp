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

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "\n\nWrong animal part" << std::endl;
    const WrongAnimal* beta = new WrongAnimal();
    const Animal* k = new Dog();
    const WrongAnimal* p = new WrongCat();

    std::cout << k->getType() << " " << std::endl;
    std::cout << p->getType() << " " << std::endl;
    p->makeSound(); //will output the wrong cat sound!
    k->makeSound();
    beta->makeSound();
    delete beta;
    delete k;
    delete p;
    return (0);
}

