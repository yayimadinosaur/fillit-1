/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 04:23:55 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/14 16:28:53 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int argc, char **argv)
{
	int			fd;
	t_tetri		*tetris;
	char		**solved;

	if (argc != 2)
		return (0);
	printf("starting check\n");
	fd = open(argv[1], O_RDONLY);
	if	(fd == -1)
		return (0);
	tetris = readchecks(fd);
	printf("jumping into solved");
	solved = ft_solved(tetris);
	return (0);
}
