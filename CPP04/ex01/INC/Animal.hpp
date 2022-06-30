/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string.h>
# include <iostream>
# include "Brain.hpp"

class Animal {

protected :

    std::string _type;

public :

    Animal(void);
    Animal(const Animal &obj);
    virtual ~Animal(void);

    Animal   &operator=(const Animal &obj);

    std::string getType(void) const;
    void        setType(const std::string &type);
    virtual void    makeSound(void) const;
    virtual Brain           getBrain(void) const;
    virtual void            setBrain(Brain newBrain);
};

#endif



