/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string.h>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public :

    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    ~FragTrap(void);

    FragTrap   &operator=(const FragTrap &obj);

    void    attack(const std::string & target);
    void    highFiveGuys(void);
};

#endif

