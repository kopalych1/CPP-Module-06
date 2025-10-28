/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 14:30:50 by akostian          #+#    #+#             */
/*   Updated: 2025/10/28 16:16:02 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <climits>
#include <iostream>
#include <limits>

ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(const ScalarConverter& other) { (void)other; };
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
};

static void printChar(double val) {
	std::cout << "Char:\t";

	// Checking if the value is in char, and not NaN
	if (val < 0 || val > CHAR_MAX || val != val) {
		std::cout << "Impossible" << "\n";
		return;
	}
	if (!isprint(static_cast<int>(val))) {
		std::cout << "Non displayable" << "\n";
		return;
	}
	std::cout << '\'' << static_cast<char>(val) << '\'' << "\n";
}

void printInt(double val) {
	std::cout << "Int:\t";

	if (val < INT_MIN || val > INT_MAX || val != val) {
		std::cout << "Impossible" << "\n";
		return;
	}
	std::cout << static_cast<int>(val) << "\n";
}

void printFloat(double val) {
	std::cout << "Float:\t";

	if (val == -std::numeric_limits<double>::infinity() || val == std::numeric_limits<double>::infinity() ||
	    val != val) {
		std::cout << val << 'f' << "\n";
		return;
	}

	if (val > __FLT_MAX__ || val < -__FLT_MAX__) {
		std::cout << "Impossible" << "\n";
		return;
	}

	std::cout << static_cast<float>(val);
	if (static_cast<float>(val) == static_cast<int>(val)) std::cout << ".0";
	std::cout << "f" << "\n";
}

void ScalarConverter::convert(std::string input) {
	double f;
	if ((input.size() == 1) && !(input[0] >= '0' && input[0] <= '9'))
		f = static_cast<double>(static_cast<int>(input[0]));
	else
		f = atof(input.c_str());

	printChar(f);
	printInt(f);
	printFloat(f);

	std::cout << "Double:\t";

	std::cout << f;
	if (f == static_cast<int>(f)) std::cout << ".0";
	std::cout << "\n";
}
