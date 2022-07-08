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

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <string.h>
# include <iostream>
# include "Form.hpp"

class Bureaucrat ;

class ShrubberyCreationForm : public AForm {

private :

    const std::string   _target;

public :

    ShrubberyCreationForm(void);
    ShrubberyCreationForm(std::string const &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    virtual ~ShrubberyCreationForm(void);
    ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &obj);

    virtual void        execute(Bureaucrat const & executor) const;
};

#endif