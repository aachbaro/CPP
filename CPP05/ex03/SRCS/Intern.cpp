/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Intern.hpp"

Intern::Intern(void)
{
    std::cout << "Intern default constructor called" << std::endl;
    return ;
}

Intern::Intern(const Intern &)
{
    std::cout << "Intern copy constructor called" << std::endl;
    return ;
}

Intern::~Intern(void)
{
    std::cout << "Intern destructor called" << std::endl;
    return ;
}

Intern   &Intern::operator=(const Intern &)
{
    std::cout << "Intern copy assignement coperator called" << std::endl;
    return (*this);
}

AForm   *Intern::makeForm(std::string const &name, std::string const &target)
{
    std::string nameform[3] = {
        "shrubbery creation", "robotomy request", "presidential pardon"
    };
    AForm       *form[3] = {
        new ShrubberyCreationForm(target),  new RobotomyRequestForm(target), new PresidentialPardonForm(target)
    };
    int i(0);
    AForm   *ret = NULL;

    while (i < 3)
    {
        if (!name.compare(nameform[i]))
        {
            std::cout << "Intern creates " << name << std::endl;
            ret = form[i];
        }
        else
            delete form[i];
        i++;
    }
    if (!ret)
        std::cout << "Invalid form name" << std::endl;
    return (ret);
}



