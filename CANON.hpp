/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CANON.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CANON_HPP
# define CANON_HPP
# include <string.h>
# include <iostream>

class CANON {

private :

public :

    CANON(void);
    CANON(const CANON &obj);
    ~CANON(void);
    CANON   &operator=(const CANON &obj);
    
};

#endif


