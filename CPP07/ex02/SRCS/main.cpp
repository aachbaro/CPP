/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachbaro <aachbaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:59:00 by aachbaro          #+#    #+#             */
/*   Updated: 2022/07/11 13:06:32 by aachbaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/Base.hpp"
#include "../INC/A.hpp"
#include "../INC/B.hpp"
#include "../INC/C.hpp"
#include <ctime>

Base	*generate(void)
{
	Base	*gen;
	int		(i);

	srand(time(NULL));
	i = rand() % 3;
	std::cout << static_cast<char>(i + 'A') << std::endl;
	if (i == 0)
		gen = new A();
	else if (i == 1)
		gen = new B();
	else
		gen = new C();
	return (gen);
}

void	identify(Base *p)
{
	A	*testA = dynamic_cast<A *>(p);
	B	*testB = dynamic_cast<B *>(p);
	C	*testC = dynamic_cast<C *>(p);

	if (testA)
		std::cout << "Class pointed by *p is A" << std::endl;
	else if (testB)
		std::cout << "Class pointed by *p is B" << std::endl;
	else if (testC)
		std::cout << "Class pointed by *p is C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A	&testA = dynamic_cast<A &>(p);
		(void)testA;
		std::cout << "Class pointed by &p is A" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B	&testB = dynamic_cast<B &>(p);
		(void)testB;
		std::cout << "Class pointed by &p is B" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C	&testC = dynamic_cast<C &>(p);
		(void)testC;
		std::cout << "Class pointed by &p is C" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	
}

int main()
{
	Base	*gen = generate();
	Base	&gen2 = *generate();

	identify(gen);
	identify(gen2);
	return 0;
}