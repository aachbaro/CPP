/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CANON.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/CANON.hpp"

CANON::CANON(void)
{
    std::cout << "CANON default constructor called" << std::endl;
    this->_value = 0;
    return ;
}

CANON::CANON(const CANON &obj)
{
    std::cout << "CANON copy constructor called" << std::endl;
    *this = obj;
    return ;
}

CANON::~CANON(void)
{
    std::cout << "CANON destructor called" << std::endl;
    return ;
}

CANON   &CANON::operator=(const CANON &obj)
{
    std::cout << "CANON copy assignement coperator called" << std::endl;
    return (*this);
}


