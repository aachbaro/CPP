/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->setType("Dog");
    this->_brain = new Brain();
    return ;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
    return ;
}

Dog   &Dog::operator=(const Dog &obj)
{
    std::cout << "Dog copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    *this->_brain = obj.getBrain();
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << "WafeWafe" << std::endl;
}

Brain   Dog::getBrain(void) const
{
    return (*this->_brain);
}

void   Dog::setBrain(Brain newBrain)
{
    *this->_brain = newBrain;
}



