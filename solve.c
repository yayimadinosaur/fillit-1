/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 18:23:39 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/16 18:24:06 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*char		**ft_solve(char **map, int min, t_tetri *tetris)
{
	;
}*/

char		**ft_solved(t_tetri *tetri)
{
	char		**map;
	t_count		*count;
	int			min;

	printf("in solved\n");
	count = NULL;
	map = NULL;
	printf("pass null\n");
	min = ft_mapmin(tetri);
	printf("min = %d", min);
	map = ft_mapmaker(map, min);
		/*map = ft_solve(map, min, tetris);*/
	return (map);
}
