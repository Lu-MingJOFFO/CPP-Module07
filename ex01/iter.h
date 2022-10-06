/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:08:32 by ljoffo            #+#    #+#             */
/*   Updated: 2022/08/25 16:06:59 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template< typename T >
void iter(T* tab, int length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(tab[i]); 
}

#endif

