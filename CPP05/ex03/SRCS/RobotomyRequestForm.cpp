/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = obj;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return ;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    std::cout << "RobotomyRequestForm copy assignement coperator called" << std::endl;
    std::cout << "Name target and grades can't be assigned" << std::endl;
    this->_signed = obj._signed;
    return (*this);
}

void        RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->_requiredGradeToExec && this->_signed)
    {
        std::cout << "brrrrr.. brrrr.. " << std::endl;
        srand(time(NULL));
        if ((rand() % 2) == 1)
            std::cout << "Operation succed : " << this->_target << " has been robotomised" << std::endl;
        else
            std::cout << "Opperation failed : " << this->_target << " was a chic type" << std::endl;
    }
    else if (!this->_signed)
        throw FormNotSignException();
    else
        throw TooLowToExecException();
}