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

class AAnimal {

protected :

    std::string _type;

public :

    AAnimal(void);
    AAnimal(const AAnimal &obj);
    virtual ~AAnimal(void);

    AAnimal  &operator=(const AAnimal &obj);

    std::string getType(void) const;
    void        setType(const std::string &type);
    virtual void    makeSound(void) const = 0;
    virtual Brain   *getBrain(void) const = 0;
};

#endif



