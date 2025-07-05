/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:43:23 by akostian          #+#    #+#             */
/*   Updated: 2025/06/28 16:53:49 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED "Incorrect arguments" CRESET " usage:" << "\n";
		std::cout << "./Converter " CYN "<number>" CRESET << "\n";
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}
