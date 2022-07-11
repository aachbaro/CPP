/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:00 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 15:51:19 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Array.hpp"

int main()
{
	Array<int>	tab(5);

	std::cout << "fill tab..." <<std::endl;
	for (int i = 0; i < 5; i++)
		tab[i] = i;
	std::cout << "show tab:" <<std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << std::endl;
	std::cout << "construct cpy with tab..." <<std::endl;
	Array<int>	cpy(tab);

	std::cout << "modifying tab..." <<std::endl;
	for (int i = 0; i < 5; i++)
		tab[i] = i + 8;
	std::cout << "show tab:" <<std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << std::endl;
	std::cout << "show cpy:" <<std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << cpy[i] << std::endl;
	try
	{
		cpy[27] = 27;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}