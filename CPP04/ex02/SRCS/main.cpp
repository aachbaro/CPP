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
    // AAnimal     *test = new AAnimal;
    Cat         *src = new Cat;
    Cat         *cpy = new Cat;

    std::cout << "\nTEST DE COPY : " << std::endl;
    src->getBrain()->setIdea(0, "Im a cat");
    src->getBrain()->setIdea(1, "shut your mouse");
    *cpy = *src;
    std::cout << cpy->getBrain()->getIdea(1) << std::endl;
    std::cout << cpy->getType() << std::endl;
    cpy->makeSound();
    std::cout << "\nSUP DE SRC" << std::endl;
    delete src;
    std::cout << "\nCPY EXISTE TOUJOURS" << std::endl;
    std::cout << cpy->getBrain()->getIdea(1) << std::endl;
    std::cout << cpy->getType() << std::endl;
    cpy->makeSound();
    delete cpy;
    return (0);
}

