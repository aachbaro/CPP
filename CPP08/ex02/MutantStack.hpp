/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:12:02 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/12 14:32:33 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :

        MutantStack() {}
        MutantStack(const MutantStack &src) {   *this = src;    }
        ~MutantStack() {}

        MutantStack &operator=(const MutantStack &) {  return (*this); }

        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator    begin(void) {   return (this->c.begin());    }
        iterator    end(void) {     return (this->c.end());     }
};

#endif