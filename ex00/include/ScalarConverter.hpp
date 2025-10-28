/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 16:41:14 by akostian          #+#    #+#             */
/*   Updated: 2025/10/27 15:21:19 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include <climits>
#include <iostream>
#include <string>

#include "colors.hpp"

class ScalarConverter {
   private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter& operator=(const ScalarConverter& other);

   public:
	virtual ~ScalarConverter() = 0;

	static void convert(std::string input);
};
