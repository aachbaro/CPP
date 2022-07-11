/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:00 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 12:14:45 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/data.hpp"

uintptr_t serialize(t_data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

t_data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<t_data*>(raw));
}

int main()
{
	t_data	*p = new t_data;

	p->n = 42;

	std::cout << p << " : " << p->n << std::endl;
	std::cout << deserialize(serialize(p)) << " : ";
	std::cout << p->n << std::endl;

	delete p;

	return 0;
}