/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:30:50 by akostian          #+#    #+#             */
/*   Updated: 2025/07/05 21:24:21 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

static void	printChar(double val)
{
	std::cout << "Char:\t";

	// Checking if the value is in char, and not NaN
	if (val < 0 || val > CHAR_MAX || val != val)
	{
		std::cout << "Impossible" << "\n";
		return ;
	}
	if (val >= 0 && !isprint(val))
	{
		std::cout << "Non displayable" << "\n";
		return ;
	}
	std::cout << '\'' << (char)val << '\'' << "\n";
}

void	printInt(double val)
{
	std::cout << "Int:\t";

	if ((long)val < INT_MIN || (long)val > INT_MAX)
	{
		std::cout << "Impossible" << "\n";
		return ;
	}
	std::cout << (int)val << "\n";
}

void	printFloat(double val)
{
	std::cout << "Float:\t";

	if ((static_cast<float>(val) > __FLT_MAX__) || (static_cast<float>(val) < -__FLT_MAX__))
	{
		std::cout << "Impossible" << "\n";
		return ;
	}
	if (val != val)
	{
		std::cout << "nanf" << "\n";
		return ;
	}

	std::cout << static_cast<float>(val);
	if (static_cast<float>(val) == static_cast<int>(val))
		std::cout << ".0";
	std::cout << "f" << "\n";
}

void	ScalarConverter::convert(std::string input)
{
	double		f = atof(input.c_str());

	printChar(f);
	printInt(f);
	printFloat(f);

	std::cout << "Double:\t";

	std::cout << f;
	if (f == static_cast<int>(f))
		std::cout << ".0";
	std::cout << "\n";
}
