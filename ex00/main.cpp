/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:56:47 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 22:24:13 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	int	* find;
	std::vector<int> arr;

	try
	{
		arr.push_back(10);
		arr.push_back(20);
		find = easyfind(arr, 20);
		std::cout << "Found number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int> arr2(10, -1);
		find = easyfind(arr2, 3);
		std::cout << "Found number " << *find << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
