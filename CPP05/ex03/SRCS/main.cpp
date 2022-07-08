/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../INC/Bureaucrat.hpp"
#include "../INC/Form.hpp"
#include "../INC/ShrubberyCreationForm.hpp"
#include "../INC/RobotomyRequestForm.hpp"
#include "../INC/PresidentialPardonForm.hpp"
#include "../INC/Intern.hpp"

int main(void)
{
    Intern      *ehToi = new Intern;
    AForm       *prout = ehToi->makeForm("robotomy request", "bender");
    try
    {
        Bureaucrat  pietro("pietro", 150);
        Bureaucrat  pablo("pablo", 1);


        std::cout << *prout << std::endl;
        pablo.signForm(*prout);
        pietro.executeForm(*prout);
        pablo.executeForm(*prout);
        delete ehToi;
        delete prout;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        delete prout;
        delete ehToi;
    }
    return (0);
}