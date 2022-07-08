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

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string.h>
# include <iostream>
# include "Form.hpp"

class Bureaucrat ;

class PresidentialPardonForm : public AForm {

private :

    const std::string   _target;

public :

    PresidentialPardonForm(void);
    PresidentialPardonForm(std::string const &target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm   &operator=(const PresidentialPardonForm &obj);

    virtual void        execute(Bureaucrat const & executor) const;
};

#endif


