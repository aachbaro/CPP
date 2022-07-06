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

int main(void)
{
    try
    {
        Bureaucrat  pietro("pietro", 150);

        std::cout << pietro << std::endl;
        pietro.upgrade();
        std::cout << pietro << std::endl;
        pietro.downgrade();
        std::cout << pietro << std::endl;
        pietro.downgrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}

