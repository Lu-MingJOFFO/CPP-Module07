/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/09 15:59:10 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.h"

template< typename T >
void print(T & t)
{
	std::cout << t << std::endl;
}

int main(void)
{
	int tabInt[4] = {1, 2, 3};
	iter(tabInt, 3, print);
	
	std::cout << std::endl;

	char tabChar[4] = {'a', 'b', 'c', 'd'};
	iter(tabChar, 4, print);

	std::cout << std::endl;

	double tabDble[3] = {1.2, 3.4, 5.6};
	iter(tabDble, 3, print);
}

//! Main correction
// class Awesome
// {
// 	public:
// 		Awesome( void ) : _n( 42 )
// 		{
// 			return;
// 		}
// 		int get( void ) const
// 		{
// 			return this->_n;
// 		}
// 	private:
// 		int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
// {
// 	o << rhs.get();
// 	return o;
// }
// template< typename T >
// void print(T const & x)
// {
// 	std::cout << x << std::endl;
// 	return;
// }
// int main() 
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter( tab, 5, print );
// 	iter( tab2, 5, print );
// 	return 0;
// }