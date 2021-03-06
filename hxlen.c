/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmedina- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 13:54:02 by pmedina-          #+#    #+#             */
/*   Updated: 2020/11/13 13:10:08 by pmedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		hxlen(unsigned long nb)
{
	int	count;

	count = 0;
	while (nb >= 16)
	{
		nb /= 16;
		count++;
	}
	if (nb >= 0)
		count++;
	return (count);
}
