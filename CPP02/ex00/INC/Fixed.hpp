/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <string.h>
# include <iostream>

class Fixed {

private :

    int                 _value;
    static const int    _bits = 8;

public :

    Fixed(void);
    Fixed(const Fixed &obj);
    ~Fixed(void);
    Fixed   &operator=(const Fixed &obj);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    
};

#endif

