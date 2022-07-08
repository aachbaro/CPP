/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("")
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
    return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = obj;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return ;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    std::cout << "PresidentialPardonForm copy assignement coperator called" << std::endl;
    std::cout << "Name target and grades can't be assigned" << std::endl;
    this->_signed = obj._signed;
    return (*this);
}

void        PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->_requiredGradeToExec && this->_signed)
    {
        std::cout << this->_target << " has been pardoned by Zaphod Beeblbrox" << std::endl;
    }
    else if (!this->_signed)
        throw FormNotSignException();
    else
        throw TooLowToExecException();
}


