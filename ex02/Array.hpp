/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:40:52 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/09 14:53:44 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class	Array
{
	public:
		Array(void): _array(new T[0]), _size(0) {}
		Array(unsigned int n): _array(new T[n]), _size(n) {}
		Array(Array const &src): _array(NULL) // _array(new T[0]), _size(0) 
		{
			*this = src;
		}
		
		Array & operator=(Array const &rhs)
		{
			if (this != &rhs)
			{
				if (_array)
					delete[] _array;
				_size = rhs._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = rhs._array[i];
			}
			return *this;
		}
		
		~Array(void)
		{
				delete[] _array;
		}
		
		unsigned int size(void)
		{
			return _size;
		}	
		
		T & operator[](unsigned int i)
		{
			if (i < 0 || i >= _size)
				throw std::exception();					
			else
				return _array[i]; 		
		}
		
	private:
		T *				_array;
		unsigned int	_size;
		
};

#endif