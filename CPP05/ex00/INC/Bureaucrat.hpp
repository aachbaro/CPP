/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string.h>
# include <iostream>

class Bureaucrat {

private :

    std::string const   _name;
    unsigned int        _grade;

    class E_GradetooHigh : public std::exception {
    public :
        virtual const char* what() const throw() 
        {return ("Grade too high");}
    };
    class E_GradetooLow : public std::exception {
    public :
        virtual const char* what() const throw()
        {return ("Grade too low");}
    };

public :

    Bureaucrat(void);
    Bureaucrat(std::string const &name, unsigned int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat(void);

    Bureaucrat   &operator=(const Bureaucrat &obj);

    std::string const   &getName() const;
    int                 &getGrade() const;
    void                upgrade();
    void                downgrade();
};

#endif




