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

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string.h>
# include <iostream>
# include "Form.hpp"

class Bureaucrat ;

class RobotomyRequestForm : public AForm {

private :

    const std::string   _target;

public :

    RobotomyRequestForm(void);
    RobotomyRequestForm(std::string const &target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    virtual ~RobotomyRequestForm(void);
    RobotomyRequestForm   &operator=(const RobotomyRequestForm &obj);

    virtual void        execute(Bureaucrat const & executor) const;
};

#endif

