/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    return ;
}

Bureacray

Bureaucrat::Bureaucrat(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat destructor called" << std::endl;
    return ;
}

Bureaucrat   &Bureaucrat::operator=(const Bureaucrat &obj)
{
    std::cout << "Bureaucrat copy assignement coperator called" << std::endl;
    this->_type = obj.getType();
    return (*this);
}




