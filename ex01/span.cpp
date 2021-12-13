/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:57:19 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 21:51:36 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) : _size(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Span::Span(size_t numbers) : _size(numbers)
{
	std::cout << "Constructor with numbers parametter called" << std::endl;
}

Span::~Span()
{
	std::cout << "Destructor called" << std::endl;
}

void	Span::addNumber(int number)
{
	if (_vector.size() == _size)
		throw Span::VectorAlreadyFilled();
	_vector.push_back(number);
}

static	int	randomInt(size_t size)
{
	int i;

	srand((unsigned)time(0));
	i = (rand() % size) + 1;
	return (i);
}

void	Span::fill(void)
{
	size_t	start;

	start = _vector.size();
	while (start < _size)
	{
		usleep(50);
		_vector.push_back(randomInt(_size));
		start++;
	}
}

int		Span::shortestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorIsEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthIsOne();
	std::vector<int>copy = _vector;
	std::sort(copy.begin(), copy.end(), std::less<int>());
	return *(copy.begin());
}

int		Span::longestSpan(void) const
{
	if (_vector.empty())
		throw Span::VectorIsEmpty();
	else if (_vector.size() == 1)
		throw Span::VectorLengthIsOne();
	std::vector<int>copy = _vector;
	std::sort(copy.begin(), copy.end(), std::greater<int>());
	return *(copy.begin());
}
