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

int main(void)
{
    AForm       *prout = new PresidentialPardonForm("Blender");
    AForm       *shrub = new ShrubberyCreationForm("Arbustes");
    try
    {
        Bureaucrat  pietro("pietro", 150);
        Bureaucrat  pablo("pablo", 1);

        std::cout << *prout << std::endl;
        pablo.signForm(*prout);
        pietro.signForm(*shrub);
        pablo.signForm(*shrub);
        pietro.executeForm(*prout);
        pablo.executeForm(*prout);
        pablo.executeForm(*shrub);
        delete prout;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        delete prout;
    }
    return (0);
}