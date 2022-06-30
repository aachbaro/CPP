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

#include "../INC/WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->setType("Cat");
    return ;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = obj;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}

WrongCat   &WrongCat::operator=(const WrongCat &obj)
{
    std::cout << "WrongCat copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << "MeouMeou" << std::endl;
}




