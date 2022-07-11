/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:15:41 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 17:13:37 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>

template<typename T>
typename T::iterator easyfind(T & cont, int n)
{
    typename T::iterator it;

    it = find(cont.begin(), cont.end(), n);
    if (it == cont.end())
        throw std::overflow_error("No occurence found");
    return (it);
}

#endif