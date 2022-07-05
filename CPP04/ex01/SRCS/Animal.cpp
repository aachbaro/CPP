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

#include "../INC/Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal default constructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal   &Animal::operator=(const Animal &obj)
{
    std::cout << "Animal copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}

std::string    Animal::getType(void) const
{
    return (this->_type);
}

void    Animal::setType(const std::string &type)
{
    this->_type = type;
}

void    Animal::makeSound(void) const
{
    std::cout << "Typical animal sound" << std::endl;
}

Brain   *Animal::getBrain(void) const
{
    Brain   *cervo = NULL;
    return (cervo);
}


