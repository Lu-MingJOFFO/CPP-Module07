/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/09/09 16:01:50 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "whatever.h"

int	main(void)
{
	int i = 2;
	int j = 3;

	swap(i, j);
	
	std::cout << "i: " << i << std::endl;
	std::cout << "j: " << j << std::endl;

	std::cout << "min: " << min(i, j) << std::endl;
	std::cout << "max: " << max(i, j) << std::endl;
	
	char c = 'A';
	char d = 'Z';

	swap(c, d);
	
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;

	std::cout << "min: " << min(c, d) << std::endl;
	std::cout << "max: " << max(c, d) << std::endl;

	
}

// int main( void ) {
	
// int a = 2;
// int b = 3;

// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

// std::string c = "chaine1";
// std::string d = "chaine2";

// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

// return 0;

// }