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

#ifndef CAT_HPP
# define CAT_HPP
# include <string.h>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private :

    Brain*  _brain;

public :

    Cat(void);
    Cat(const Cat &obj);
    ~Cat(void);

    Cat   &operator=(const Cat &obj);

    virtual void    makeSound(void) const;
    virtual Brain   *getBrain(void) const;
};

#endif




