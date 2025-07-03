/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:04:40 by akostian          #+#    #+#             */
/*   Updated: 2025/07/03 22:21:58 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

#define N 20

int main()
{
	for (size_t i = 0; i < N; i++)
	{
		Base *ptr = generate();

		identify(ptr);
		identify(*ptr);
		delete ptr;
	}
}
