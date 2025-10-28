/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:43:23 by akostian          #+#    #+#             */
/*   Updated: 2025/10/28 12:21:55 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << colors::red_bbold << "Incorrect arguments" << colors::reset << " usage:" << "\n";
		std::cout << "./Converter " << colors::cyan_bbold << "<number>" << colors::reset << "\n";
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}
