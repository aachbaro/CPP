/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = obj;
    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}

ScavTrap   &ScavTrap::operator=(const ScavTrap &obj)
{
    std::cout << "Copy assignement coperator called" << std::endl;
    this->_name = obj.getName();
    this->_hitPoints = obj.getHP();
    this->_energyPoints = obj.getEP();
    this->_attackDamage = obj.getAD();
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage" << std::endl;
    this->_energyPoints--;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << " enter gate keeper mode" << std::endl;
    return ;
}


