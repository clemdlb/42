/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-la-b <cde-la-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 12:31:29 by cde-la-b          #+#    #+#             */
/*   Updated: 2019/07/17 12:52:10 by cde-la-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (malloc(sizeof(*str) * (i + 1)));
    if (!str)
        return (0);
	j = 0;
	while (j < i)
	{
		str[j] = src[j];
		j++;
	}
	return (str);
}

int main()
{
    char src[] = "trouducu";
    printf("%s\n", src);
    printf("%s\n", ft_strdup(src));
    return (0);
}