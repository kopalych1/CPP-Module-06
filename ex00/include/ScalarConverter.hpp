/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:41:14 by akostian          #+#    #+#             */
/*   Updated: 2025/06/28 18:27:36 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <climits>

class ScalarConverter {
	public:
		ScalarConverter() {};
		ScalarConverter(const ScalarConverter& other) { (void)other; };
		ScalarConverter& operator=(const ScalarConverter& other) { (void)other; return *this;};
		virtual	~ScalarConverter() = 0;

		static void	convert(std::string input);
};
