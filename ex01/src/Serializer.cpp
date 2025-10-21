/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:39:13 by akostian          #+#    #+#             */
/*   Updated: 2025/10/21 08:39:28 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) { return reinterpret_cast<uintptr_t>(ptr); }

Data* Serializer::deserialize(uintptr_t raw) { return reinterpret_cast<Data*>(raw); }
