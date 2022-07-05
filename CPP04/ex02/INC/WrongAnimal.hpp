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

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string.h>
# include <iostream>

class WrongAnimal {

protected :

    std::string _type;

public :

    WrongAnimal(void);
    WrongAnimal(const WrongAnimal &obj);
    ~WrongAnimal(void);

    WrongAnimal   &operator=(const WrongAnimal &obj);

    std::string getType(void) const;
    void        setType(const std::string &type);
    void    makeSound(void) const;
};

#endif



