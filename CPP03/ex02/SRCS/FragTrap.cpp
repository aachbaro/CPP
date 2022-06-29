/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "FragTrap default constructor called" << std::endl;
    return ;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    return ;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = obj;
    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}

FragTrap   &FragTrap::operator=(const FragTrap &obj)
{
    std::cout << "Copy assignement coperator called" << std::endl;
    this->_name = obj.getName();
    this->_hitPoints = obj.getHP();
    this->_energyPoints = obj.getEP();
    this->_attackDamage = obj.getAD();
    return (*this);
}

void    FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage" << std::endl;
    this->_energyPoints--;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->_name << " is asking for a high Five" << std::endl;
    return ;
}



