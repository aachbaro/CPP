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
    const Animal* rAnim = new Animal();
    const WrongAnimal* WrongrAnim = new WrongAnimal();
    const Animal* klebs = new Dog();
    const Animal* chat = new Cat();
    const WrongAnimal* Wrongchat = new WrongCat();

    std::cout << "random beast : ";
    rAnim->makeSound();
    std::cout << "random Wrongbeast : ";
    WrongrAnim->makeSound();
    std::cout << "Chat : ";
    chat->makeSound();
    std::cout << "WrongChat : ";
    Wrongchat->makeSound();
    std::cout << "Klebar : ";
    klebs->makeSound();

    delete rAnim;
    delete WrongrAnim;
    delete chat;
    delete Wrongchat;
    delete klebs;
    return (0);
}

