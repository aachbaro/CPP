/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:03:09 by aachbaro          #+#    #+#             */
/*   Updated: 2022/04/07 14:16:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string.h>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat ;

class Form {

private :

    std::string const   _name;
    bool                _signed;
    unsigned int const  _requiredGradeToSign;
    unsigned int const  _requiredGradeToExec;

    class GradetooHighException : public std::exception {
    public :
        virtual const char* what() const throw() 
        {return ("Form: Grade too high");}
    };
    class GradetooLowException : public std::exception {
    public :
        virtual const char* what() const throw()
        {return ("Form: Grade too low");}
    };


public :

    Form(void);
    Form(std::string const &name, unsigned int sign, unsigned int exe);
    Form(const Form &obj);
    ~Form(void);
    Form   &operator=(const Form &obj);

    std::string const   &getName() const;
    bool                isSigned() const;
    unsigned int        getReqGradToSign() const;
    unsigned int        getReqGradToExec() const;

    void                checkGrade();
    void                beSigned(Bureaucrat &dude);
};

std::ostream    &operator<<(std::ostream &out, Form const &obj);

#endif



