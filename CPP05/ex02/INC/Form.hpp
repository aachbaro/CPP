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

class AForm {

protected :

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
    class TooLowToExecException : public std::exception {
    public :
        virtual const char* what() const throw() 
        {return ("Form: Bureaucrat hasn't the required grade to execute this form");}
    };
    class FormNotSignException : public std::exception {
    public :
        virtual const char* what() const throw()
        {return ("Form: Form can't be executate if not signed");}
    };


public :

    AForm(void);
    AForm(std::string const &name, unsigned int sign, unsigned int exe);
    AForm(const Form &obj);
    virtual ~AForm(void);
    AForm   &operator=(const AForm &obj);

    std::string const   &getName() const;
    bool                isSigned() const;
    unsigned int        getReqGradToSign() const;
    unsigned int        getReqGradToExec() const;

    void                checkGrade();
    void                beSigned(Bureaucrat &dude);
    virtual void        execute(Bureaucrat const & executor) const = 0;
};

std::ostream    &operator<<(std::ostream &out, AForm const &obj);

#endif



