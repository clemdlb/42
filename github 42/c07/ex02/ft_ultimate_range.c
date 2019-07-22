/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-b <cde-la-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 17:05:04 by cde-la-b          #+#    #+#             */
/*   Updated: 2019/07/22 16:42:00 by cde-la-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	if ((max - min) <= 0)
	{
		*range = (NULL);
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(*tab) * (max - min + 1))))
		return (0);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (i);
}

int main (void)
{
	int **range;
	int size;

	size = ft_ultimate_range(range, 1, 11);
	return (0);
}
