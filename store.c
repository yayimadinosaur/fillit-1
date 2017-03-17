/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:50:24 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/14 16:50:35 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_xydistance(t_tetri *newtetri, int j, int k, int i)
{
	if (i == 0)
	{
		newtetri->x1 = k;
		newtetri->y1 = j;
		newtetri->ypos[i] = 0;
		newtetri->xpos[i] = 0;
	}
	else
	{
		newtetri->ypos[i] = k - newtetri->x1;
		newtetri->xpos[i] = j - newtetri->y1;
	}
}

t_tetri		ft_storexy(char **str, t_tetri *newtetri, int j, int i)
{
	int		k;

	while (str[j] != '\0')
	{
		k = 0;
		while (str[j][k])
		{
			if (str[j][k] == '#')
			{
				ft_xydistance(newtetri, j, k, i);
				i++;
			}
			k++;
		}
		j++;
	}
	printf("y1=%d x1=%d\n", newtetri->ypos[3], newtetri->xpos[3]);
	printf("%c\n", newtetri->letter);
	return (*newtetri);
}

t_tetri		*ft_store(char *str, int i, t_tetri *tmp)
{
	char		**grid;
	t_tetri		storedxy;

	tmp->letter = 'A' + i;
	grid = ft_strsplit(str, '\n');
	storedxy = ft_storexy(grid, tmp, 0, 0);
	return (*&tmp);
}
