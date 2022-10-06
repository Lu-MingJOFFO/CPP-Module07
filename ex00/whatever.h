/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:08:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/08/24 15:43:00 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template< typename T >
void swap(T & a, T & b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template< typename T >
T & min(T & a, T & b)
{
	if (a < b)
		return a;
	else
		return b;
}

template< typename T >
T & max(T & a, T & b)
{
	if (a > b)
		return a;
	else
		return b;
}

#endif

