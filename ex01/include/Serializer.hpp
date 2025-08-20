/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:40:28 by akostian          #+#    #+#             */
/*   Updated: 2025/08/20 21:34:15 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

#include "Data.hpp"

class Serializer {
   public:
	Serializer(){};
	Serializer(const Serializer& other) { (void)other; };
	Serializer& operator=(const Serializer& other) {
		(void)other;
		return *this;
	};
	virtual ~Serializer() = 0;

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif  // SERIALIZER_HPP
