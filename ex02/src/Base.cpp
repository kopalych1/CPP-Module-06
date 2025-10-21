/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:58:25 by akostian          #+#    #+#             */
/*   Updated: 2025/10/21 08:45:45 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

Base* generate(void) {
	const std::string messages[3] = {
	    std::string(colors::green_bbold_str) + "A" + colors::black_str + " created" + colors::reset_str,
	    std::string(colors::magenta_bbold_str) + "B" + colors::black_str + " created" + colors::reset_str,
	    std::string(colors::blue_bbold_str) + "C" + colors::black_str + " created" + colors::reset_str};

	static unsigned char seed_set = 0;
	if (!seed_set++) std::srand(std::time(0));

	int randv = std::rand() % 3;
	std::cout << messages[randv] << "\n";

	if (randv == 0)
		return new A();
	else if (randv == 1)
		return new B();
	return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << colors::green_ul << "A identified" << colors::reset << "\n";
		return;
	}
	if (dynamic_cast<B*>(p)) {
		std::cout << colors::magenta_ul << "B identified" << colors::reset << "\n";
		return;
	}
	if (dynamic_cast<C*>(p)) {
		std::cout << colors::blue_ul << "C identified" << colors::reset << "\n";
		return;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << colors::green_bbold_bul << "A identified" << colors::reset << "\n";
		return;
	} catch (const std::bad_cast& e) {
	}
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << colors::magenta_bbold_bul << "B identified" << colors::reset << "\n";
		return;
	} catch (const std::bad_cast& e) {
	}
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << colors::blue_bbold_bul << "C identified" << colors::reset << "\n";
		return;
	} catch (const std::bad_cast& e) {
	}
}
