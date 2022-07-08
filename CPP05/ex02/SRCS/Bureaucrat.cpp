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

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150)
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
    return ;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade) : _name(name)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    this->_grade = grade;
    this->checkGrade();
}

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
    std::cout << "name cannot be assigned" << std::endl;
    this->_grade = obj._grade;
    return (*this);
}

const std::string &Bureaucrat::getName() const {
    return (this->_name);
}

unsigned int    Bureaucrat::getGrade() const {
    return (this->_grade);
}

void        Bureaucrat::checkGrade(void)
{
    if (this->_grade > 150)
        throw GradetooLowException();
    if (this->_grade < 1)
        throw GradetooHighException();
}

void    Bureaucrat::upgrade()
{
    this->_grade--;
    this->checkGrade();
}

void    Bureaucrat::downgrade()
{
    this->_grade++;
    this->checkGrade();
}

void    Bureaucrat::signForm(AForm &obj)
{
    if (this->_grade <= obj.getReqGradToSign() && !obj.isSigned())
    {
        obj.beSigned(*this);
        std::cout << this->_name << " signed " << obj.getName() << std::endl;
    }
    else if (!obj.isSigned())
        std::cout << this->_name << " couldn't sign " << obj.getName() << " because he hasn't the required grade" << std::endl;
    else
        std::cout << this->_name << " couldn't sign " << obj.getName() << " because the form is already signed" << std::endl;

}

void    Bureaucrat::executeForm(AForm const &form)
{
    if (this->_grade <= form.getReqGradToExec())
    {
        std::cout << this->_name << " execute " << form.getName() << std::endl;
        form.execute(*this);
    }
    else
    {
        std::cout << this->_name << " has not the required grade to execute " << form.getName() << std::endl;
    }
}

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &dude)
{
    out << "________________________________\n";
    out << "Bureaucrat : " << dude.getName() << "\ngrade : " << dude.getGrade();
    out << "\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";

    return (out);
}