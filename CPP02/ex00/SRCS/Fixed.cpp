/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
    return ;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

int    Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void    Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}

Fixed   &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignement coperator called" << std::endl;
    this->_value = obj.getRawBits();
    return (*this);
}

