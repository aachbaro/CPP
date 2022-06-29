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
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &obj);
    ~Fixed(void);
    Fixed           &operator=(const Fixed &obj);
    bool            operator<(const Fixed &obj) const;
    bool            operator>(const Fixed &obj) const;
    bool            operator<=(const Fixed &obj) const;
    bool            operator>=(const Fixed &obj) const;
    bool            operator==(const Fixed &obj) const;
    bool            operator!=(const Fixed &obj) const;
    Fixed           operator+(const Fixed &obj);
    Fixed           operator-(const Fixed &obj);
    Fixed           operator*(const Fixed &obj);
    Fixed           operator/(const Fixed &obj);
    Fixed           operator++(void);
    Fixed           operator++(int);
    Fixed           operator--(void);
    Fixed           operator--(int);


    int             getRawBits(void) const;
    void            setRawBits(int const raw);
    float           toFloat(void) const;
    int             toInt(void) const;
    static Fixed    &min(Fixed &a, Fixed &b);
    static Fixed const &min(Fixed const &a, Fixed const &b);
    static Fixed    &max(Fixed &a, Fixed &b);
    static Fixed const &max(Fixed const &a, Fixed const &b);
};

std::ostream    &operator<<(std::ostream &out, Fixed const &value);

#endif

