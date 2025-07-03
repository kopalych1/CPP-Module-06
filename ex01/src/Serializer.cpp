/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:39:13 by akostian          #+#    #+#             */
/*   Updated: 2025/07/03 20:53:56 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

uintptr_t	Serializer::serialize(Data* ptr)
{
	return (uintptr_t)ptr;
}

Data*		Serializer::deserialize(uintptr_t raw)
{
	return (Data *)raw;
}
