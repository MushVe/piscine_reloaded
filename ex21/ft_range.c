/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cseguier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:27:10 by cseguier          #+#    #+#             */
/*   Updated: 2018/11/07 10:32:50 by cseguier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int				*tab;
	unsigned int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	if (!(tab = (int*)malloc(sizeof(int) * (max - min - 1))))
		return (0);
	while (min < max)
	{
		tab[i] = min;
		if (i == 4294967295 || min == 2147483647)
			return (tab);
		i++;
		min++;
	}
	return (tab);
}
