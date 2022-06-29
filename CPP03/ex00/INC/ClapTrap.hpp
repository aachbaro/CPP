/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string.h>
# include <iostream>

class ClapTrap {

private :

    std::string _name;
    int         _hitPoints;
    int         _energyPoints;
    int         _attackDamage;

public :

    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap(void);
    ClapTrap   &operator=(const ClapTrap &obj);
    std::string     getName(void) const;
    int             getHP(void) const;
    int             getEP(void) const;
    int             getAD(void) const;
    void            attack(const std::string& target);
    void            takeDamage(unsigned int amount);
    void            beRepaired(unsigned int amount);
};

#endif


