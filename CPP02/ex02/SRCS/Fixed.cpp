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
#include <math.h>

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

Fixed::Fixed(const int n)
{
    std::cout << "Int constructor called" <<std::endl;
    this->_value = n << this->_bits;
    return ;
}

Fixed::Fixed(const float n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << this->_bits));
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

bool    Fixed::operator<(const Fixed &obj) const
{
    return (this->getRawBits() < obj.getRawBits());
}

bool    Fixed::operator>(const Fixed &obj) const
{
    return (this->getRawBits() > obj.getRawBits());
}

bool    Fixed::operator<=(const Fixed &obj) const
{
    return (this->getRawBits() <= obj.getRawBits());
}

bool    Fixed::operator>=(const Fixed &obj) const
{
    return (this->getRawBits() >= obj.getRawBits());
}

bool    Fixed::operator==(const Fixed &obj) const
{
    return (this->getRawBits() == obj.getRawBits());
}

bool    Fixed::operator!=(const Fixed &obj) const
{
    return (this->getRawBits() != obj.getRawBits());
}

Fixed   Fixed::operator+(const Fixed &obj)
{
    Fixed   ret;

    ret.setRawBits(this->getRawBits() + obj.getRawBits());
    return (ret);
}

Fixed   Fixed::operator-(const Fixed &obj)
{
    Fixed   ret;

    ret.setRawBits(this->getRawBits() - obj.getRawBits());
    return (ret);
}

Fixed   Fixed::operator*(const Fixed &obj)
{
    Fixed   ret;

    ret.setRawBits(((long)this->getRawBits() * (long)obj.getRawBits()) / (1 << this->_bits));
    return (ret);
}

Fixed   Fixed::operator/(const Fixed &obj)
{
    Fixed   ret;
    
    ret.setRawBits(((long)this->getRawBits() * (1 << this->_bits) / (long)obj.getRawBits()));
    return (ret);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}

float   Fixed::toFloat(void) const
{
    return ((float)this->_value / (float)(1 << Fixed::_bits));
}

int     Fixed::toInt(void) const
{
    return (roundf(this->_value >> this->_bits));
}

