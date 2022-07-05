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

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string.h>
# include <iostream>

class Brain {

private :

    std::string _ideas[100];

public :

    Brain(void);
    Brain(const Brain &obj);
    ~Brain(void);

    Brain   &operator=(const Brain &obj);

    std::string getIdea(int i) const;
    void        setIdea(int i, std::string const idea);
};

#endif




