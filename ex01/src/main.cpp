/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 11:33:37 by akostian          #+#    #+#             */
/*   Updated: 2025/10/21 08:41:53 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../include/Data.hpp"
#include "../include/Serializer.hpp"

int main() {
	{
		std::cout << ">===== Basic test =====<" << "\n";
		Data data1 = {
		    "name",
		    18,
		    3.5,
		};

		std::cout << "Before:" << "\n";

		std::cout << "- " << data1.name << "\n";
		std::cout << "- " << data1.age << "\n";
		std::cout << "- " << data1.gender << "\n";

		uintptr_t ptr = Serializer::serialize(&data1);
		Data *data2 = Serializer::deserialize(ptr);

		std::cout << "address: " << ptr << "\n";
		std::cout << "After:" << "\n";
		std::cout << "- " << data2->name << "\n";
		std::cout << "- " << data2->age << "\n";
		std::cout << "- " << data2->gender << "\n";
	}
	{
		std::cout << ">===== Heap test =====<" << "\n";
		Data *data1 = new Data();
		data1->name = "Campus";
		data1->age = 42;
		data1->gender = 0;

		std::cout << "Before:" << "\n";

		std::cout << "- " << data1->name << "\n";
		std::cout << "- " << data1->age << "\n";
		std::cout << "- " << data1->gender << "\n";

		uintptr_t ptr = Serializer::serialize(data1);
		Data data2 = *(Serializer::deserialize(ptr));

		std::cout << "address: " << ptr << "\n";
		std::cout << "After:" << "\n";
		std::cout << "- " << data2.name << "\n";
		std::cout << "- " << data2.age << "\n";
		std::cout << "- " << data2.gender << "\n";

		delete data1;
	}
}
