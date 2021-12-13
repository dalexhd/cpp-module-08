/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:23:27 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 23:19:39 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include <stack>

#ifndef MUTANT_STACK_H
	#define MUTANT_STACK_H
	template <typename T>
	class MutantStack: public std::stack<T>
	{
		public:
			MutantStack(void) : std::stack<T>() {};
			MutantStack(MutantStack const & src) : std::stack<T>(src)
			{
				*this = src;
			};
			MutantStack		&operator=(MutantStack const &src) {
				std::stack<T>::operator=(src);
				return *this;
			}
			~MutantStack() {
				std::cout << "Default constructor called" << std::endl;
			};
			typedef typename std::stack<T>::container_type::iterator iterator;
			iterator	begin(void) {
				return this->c.begin();
			}
			iterator	end(void) {
				return this->c.end();
			}
	};
#endif
