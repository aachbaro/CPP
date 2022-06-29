/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
   return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

std::string    ClapTrap::getName(void) const
{
    return (this->_name);
}

int     ClapTrap::getHP(void) const
{
    return (this->_hitPoints);
}

int     ClapTrap::getEP(void) const
{
    return (this->_energyPoints);
}  

int     ClapTrap::getAD(void) const
{
    return (this->_attackDamage);
}

ClapTrap   &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignement coperator called" << std::endl;
    this->_name = obj.getName();
    this->_hitPoints = obj.getHP();
    this->_energyPoints = obj.getEP();
    this->_attackDamage = obj.getAD();
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage" << std::endl;
    this->_energyPoints--;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " recovers " << amount << " hit point(s)" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit point(s)" << std::endl;
    this->_hitPoints -= amount;
}


