/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:59:30 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/16 18:59:49 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_mapmin(t_tetri *tetri)
{
	int		size;
	int		i;

	i = -1;
	while (tetri != NULL)
	{
		i++;
		tetri = tetri->next;
	}
	size = 2;
	while ((size * size) - (i * 4) < 0)
		size++;
	printf("minimun size of map = %d x %d \n", size, size);
	return (size);
}

char	**ft_mapmaker(char **map, int min)
{
	int		x;

	x = 0;	
	if (!(map = (char **)malloc(sizeof(char *) * (min + 1))))
		return (NULL);
	while (x < min)
	{
		map[x] = ft_strnew(min);
		map[x] = ft_memset(map[x], '.', min);
		x++;
	}
	map[x] = NULL;
	while (*map)
		ft_putendl(*map++);
	return (map);	
}
