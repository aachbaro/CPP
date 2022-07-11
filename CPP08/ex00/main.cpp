/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:22:10 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 17:15:39 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <algorithm>

int main(void)
{
    std::list<int>  lst;

    lst.push_back(132);
    lst.push_back(1);
    lst.push_back(54);
    lst.push_back(23);
    lst.push_back(51);
    lst.push_back(123);
    lst.push_back(41);

    try
    {
        std::list<int>::iterator it = easyfind(lst, 54);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::list<int>::iterator it = easyfind(lst, 3);
        std::cout << *it << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}