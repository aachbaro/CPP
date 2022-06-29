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
#include "../INC/ClapTrap.hpp"
#include "../INC/ScavTrap.hpp"
#include "../INC/FragTrap.hpp"

int main(void)
{
    FragTrap    robot("Pablo");

    std::cout << "Pablo ep : " << robot.getEP() << std::endl;
    std::cout << "Pablo HP : " << robot.getHP() << std::endl;
    robot.attack("Pietro");
    robot.takeDamage(2);
    std::cout << "Pablo ep : " << robot.getEP() << std::endl;
    std::cout << "Pablo HP : " << robot.getHP() << std::endl;
    robot.beRepaired(2);
    robot.highFiveGuys();
    std::cout << "Pablo ep : " << robot.getEP() << std::endl;
    std::cout << "Pablo HP : " << robot.getHP() << std::endl;
    return (0);
}

