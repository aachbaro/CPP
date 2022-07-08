/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = obj;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return ;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
    std::cout << "ShrubberyCreationForm copy assignement coperator called" << std::endl;
    std::cout << "Name target and grades can't be assigned" << std::endl;
    this->_signed = obj._signed;
    return (*this);
}

void        ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() <= this->_requiredGradeToExec && this->_signed)
    {
        std::string shrub("_shrubbery");
        shrub = this->_target + shrub;
        std::ofstream   shrubfile(shrub.c_str());

        shrubfile << "                                   " << std::endl;
        shrubfile << "       ^             V      V      " << std::endl;
        shrubfile << "             v          ^          " << std::endl;
        shrubfile << "          /    ^                   " << std::endl;
        shrubfile << "         $$ v          /           " << std::endl;
        shrubfile << "       $$$  v  /      / v          " << std::endl;
        shrubfile << "     /$/$   0 v$$v   /o  V         " << std::endl;
        shrubfile << "     /$$$o    V$$ v /$$0  v        " << std::endl;
        shrubfile << "    /$$$    V $ $vvV o   o v       " << std::endl;
        shrubfile << "   $$$$     >  v   $$$  0   V      " << std::endl;
        shrubfile << "  ^^^^^^^^^^^  ###^^^^    ^^^      " << std::endl;
        shrubfile << "      ####         ^^#####         " << std::endl;
    }
    else if (!this->_signed)
        throw FormNotSignException();
    else
        throw TooLowToExecException();
}



