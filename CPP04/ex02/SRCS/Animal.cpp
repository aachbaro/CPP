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

AAnimal::AAnimal(void)
{
    std::cout << "Animal default constructor called" << std::endl;   
}

AAnimal::AAnimal(const AAnimal &obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = obj;
    return ;
}

AAnimal::~AAnimal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

AAnimal   &AAnimal::operator=(const AAnimal &obj)
{
    std::cout << "Animal copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}

std::string    AAnimal::getType(void) const
{
    return (this->_type);
}

void    AAnimal::setType(const std::string &type)
{
    this->_type = type;
}

