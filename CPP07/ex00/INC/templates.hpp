/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 14:00:05 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 14:08:30 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template<typename T>
void    swap(T &a, T &b)
{
    T   tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T       max(T a, T b)
{
    if (a > b)
        return (a);
    return (b);
}

template<typename T>
T       min(T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

#endif