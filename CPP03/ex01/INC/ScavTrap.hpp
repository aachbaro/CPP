/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SCAVTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string.h>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public :

    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ~ScavTrap(void);

    ScavTrap   &operator=(const ScavTrap &obj);

    void    attack(const std::string & target);
    void    guardGate(void);
};

#endif