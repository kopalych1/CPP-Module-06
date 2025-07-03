/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:58:25 by akostian          #+#    #+#             */
/*   Updated: 2025/07/03 22:22:53 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

Base	*generate(void)
{
	const char	*messages[3] = {
		COLORED ? GRN "A created" CRESET : "A created",
		COLORED ? MAG "B created" CRESET : "B created",
		COLORED ? BLU "C created" CRESET : "C created"
	};

	static unsigned char	seed_set = 0;
	if (!seed_set++)
		std::srand(std::time(0));

	int randv = std::rand() % 3;
	std::cout << messages[randv] << "\n";

	if (randv == 0)
		return new A();
	else if (randv == 1)
		return new B();
	return new C();
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A identified" << "\n";
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "B identified" << "\n";
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "C identified" << "\n";
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A identified" << "\n";
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B identified" << "\n";
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C identified" << "\n";
		return ;
	}
	catch(const std::exception& e) {}
}
