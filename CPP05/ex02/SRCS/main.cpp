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

int main(void)
{
    try
    {
        Bureaucrat  pietro("pietro", 150);
        Bureaucrat  pablo("pablo", 1);
        Form        accept("Formulaire d'acceptation", 42, 24);

        std::cout << std::endl;
        std::cout << accept << pietro << pablo << std::endl;
        pietro.signForm(accept);
        pablo.signForm(accept);
        std::cout << "\n" << accept << std::endl;
        pablo.signForm(accept);
        accept.beSigned(pietro);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}