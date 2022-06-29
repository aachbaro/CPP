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

#include "../INC/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = obj;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongAnimal   &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}

std::string    WrongAnimal::getType(void) const
{
    return (this->_type);
}

void    WrongAnimal::setType(const std::string &type)
{
    this->_type = type;
}

void    WrongAnimal::makeSound(void) const
{
    if (!this->getType().compare("Dog"))
        std::cout << "WafeWafe" << std::endl;
    else if (!this->getType().compare("Cat"))
        std::cout << "MeouMeou" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}



