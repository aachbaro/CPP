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
# include "Form.hpp"

class AForm ;

class Bureaucrat {

private :

    std::string const   _name;
    unsigned int        _grade;

    class GradetooHighException : public std::exception {
    public :
        virtual const char* what() const throw() 
        {return ("Bureaucrat: Grade too high");}
    };
    class GradetooLowException : public std::exception {
    public :
        virtual const char* what() const throw()
        {return ("Bureaucrat: Grade too low");}
    };

public :

    Bureaucrat(void);
    Bureaucrat(std::string const &name, unsigned int grade);
    Bureaucrat(const Bureaucrat &obj);
    ~Bureaucrat(void);

    Bureaucrat   &operator=(const Bureaucrat &obj);

    const std::string   &getName() const;
    unsigned int        getGrade() const;
    void                upgrade();
    void                downgrade();
    void                checkGrade();
    void                signForm(AForm &obj);
    void                executeForm(AForm const &form);

};

std::ostream    &operator<<(std::ostream &out, Bureaucrat const &dude);

#endif




