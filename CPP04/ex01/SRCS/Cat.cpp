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

#include "../INC/Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    this->setType("Cat");
    return ;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

Cat   &Cat::operator=(const Cat &obj)
{
    std::cout << "Cat copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << "MeouMeou" << std::endl;
}




