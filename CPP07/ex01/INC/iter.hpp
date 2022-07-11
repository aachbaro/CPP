/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:02:18 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 14:57:15 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void	iter(T *tab, unsigned int size, void (*f)(T &))
{
	unsigned int	i(0);
	while (i < size)
	{
		f(tab[i]);
		i++;
	}
}

template<typename T>
void	whatever(T &a)
{
	a += 3;
}

#endif