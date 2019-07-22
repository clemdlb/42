/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-b <cde-la-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:05:15 by cde-la-b          #+#    #+#             */
/*   Updated: 2019/07/20 14:06:45 by cde-la-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		nb_octet;
	char	*tab;

	nb_octet = 0;
	j = 0;
	i = 0;
	while (i < size)
	{
		nb_octet += ft_strlen(strs[i]);
		i++;
		if (i < size - 1)
			nb_octet += ft_strlen(sep);
	}
	if (!(tab = (char*)malloc(sizeof(char) * (nb_octet + 1))))
		return (0);
	while (j < size)
	{
		ft_strcat(tab, strs[j]);
		if (j < size - 1)
			ft_strcat(tab, sep);
		j++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int size = 3;
	char **strs;
	char sep[] = "yayaya";

	strs[0] = "tasoeur";
	strs[1] = "tamere";
	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}
