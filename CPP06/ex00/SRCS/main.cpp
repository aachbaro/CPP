/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 13:50:59 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/10 19:28:49 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../INC/Conv.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Conv    scalar;
        try
        {
            scalar.getParamType(av[1]);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        scalar.getValue(av[1]);
        scalar.printValue();
        
    }
    

    return (0);
}