/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Form.hpp"

AForm::AForm(void) : _name(""), _signed(0), _requiredGradeToSign(150), _requiredGradeToExec(150)
{
    std::cout << "AForm default constructor called" << std::endl;
    return ;
}

AForm::AForm(std::string const &name, unsigned int sign, unsigned int exe) : _name(name), _requiredGradeToSign(sign), _requiredGradeToExec(exe)
{
    std::cout << "AForm constructor called" << std::endl;
    _signed = 0;
    this->checkGrade();

}

AForm::AForm(const AForm &obj) : _name(obj._name), _requiredGradeToSign(obj._requiredGradeToSign), _requiredGradeToExec(obj._requiredGradeToExec)
{
    std::cout << "AForm copy constructor called" << std::endl;
    this->_signed = obj._signed;
    return ;
}

AForm::~AForm(void)
{
    std::cout << "AForm destructor called" << std::endl;
    return ;
}

AForm   &AForm::operator=(const AForm &obj)
{
    std::cout << "AForm copy assignement coperator called" << std::endl;
    std::cout << "_name and grade required cannot be assigned cannot be assigned" << std::endl;
    this->_signed = obj._signed;
    return (*this);
}

std::string const   &AForm::getName() const {
    return (this->_name);
}

bool    AForm::isSigned() const {
    return (this->_signed);
}

unsigned int    AForm::getReqGradToSign() const {
    return (this->_requiredGradeToSign);
}

unsigned int    AForm::getReqGradToExec() const {
    return (this->_requiredGradeToExec);
}

std::ostream    &operator<<(std::ostream &out, AForm const &obj)
{
    out << "________________________________\n";
    out << "AForm : " << obj.getName() << "\n";
    out << "Grade " << obj.getReqGradToSign() << " required to sign\n";
    out << "Grade " << obj.getReqGradToExec() << " required to execute\n";
    if (obj.isSigned())
        out << "Signed\n";
    else
        out << "Not signed\n";
    out << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    return (out);
}

void            AForm::checkGrade(void)
{
    if (this->_requiredGradeToExec > 150)
        throw GradetooLowException();
    if (this->_requiredGradeToExec < 1)
        throw GradetooHighException();
    if (this->_requiredGradeToSign > 150)
        throw GradetooLowException();
    if (this->_requiredGradeToSign < 1)
        throw GradetooHighException();
}

void    AForm::beSigned(Bureaucrat &dude)
{
    if (dude.getGrade() <= this->_requiredGradeToSign)
        this->_signed = 1;
    else
        throw GradetooLowException();
}



