/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:26:47 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 20:55:52 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

// Exceptions
class VectorNotFound : public std::exception
{
	public:
		char const * what() const throw()
		{
			return "Could't find the int inside the container!";
		}
};

template <typename T>
int	* easyfind(T &vector, int num)
{
	typename T::iterator it;

	if((it = std::find(vector.begin(), vector.end(), num)) == vector.end())
		throw VectorNotFound();
	return (&(*it));
}

