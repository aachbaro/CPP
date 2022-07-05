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

#ifndef DOG_HPP
# define DOG_HPP
# include <string.h>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {

private :

    Brain*  _brain;

public :

    Dog(void);
    Dog(const Dog &obj);
    ~Dog(void);

    Dog   &operator=(const Dog &obj);

    virtual void    makeSound(void) const;
    virtual Brain   *getBrain(void) const;
};

#endif



