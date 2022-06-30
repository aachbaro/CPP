/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor called" << std::endl;
    return ;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain   &Brain::operator=(const Brain &obj)
{
    int i(0);
    std::cout << "Brain copy assignement coperator called" << std::endl;
    while (i < 100)
    {
        this->_ideas[i] = obj.getIdea(i);
        i++;
    }
    return (*this);
}

std::string Brain::getIdea(int i) const
{
    return (this->_ideas[i]);
}

void    Brain::setIdea(int i, std::string const idea)
{
    this->_ideas[i] = idea;
}




