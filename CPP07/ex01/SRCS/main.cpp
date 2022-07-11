/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:00 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 14:57:14 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/iter.hpp"


int main()
{
	int		tab[] = { 24, 21 ,42 ,26};
	float	tab2[] = { 52.2, 21.1, 871,2, 32, 4};

	::iter(tab, 4, &whatever<int>);
	::iter(tab2, 4, &whatever<float>);
	for (int i = 0; i < 4; i++)
		std::cout << tab[i] << std::endl;
	for (int b = 0; b < 4; b++)
		std::cout << tab2[b] << std::endl;
	return 0;
}