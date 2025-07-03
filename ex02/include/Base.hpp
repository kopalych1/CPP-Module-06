/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 21:01:10 by akostian          #+#    #+#             */
/*   Updated: 2025/07/03 22:22:46 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <cstdlib>
# include <iostream>
# include <ctime>

# include "colors.hpp"

class Base {
	public:
		virtual	~Base() {};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif // BASE_HPP