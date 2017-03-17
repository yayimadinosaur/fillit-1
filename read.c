/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 16:29:31 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/14 16:29:37 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetri		*readchecks(int fd)
{
	t_count		*count;
	t_tetri		*tetris;
	t_tetri		*tmp;
	char		str[21];
	int			i;
	int			curr;
	int			last;

	i = 0;	
	if (!(tetris = (t_tetri *)malloc(sizeof(t_tetri))))
		return (0);
	if (!(count = (t_count *)malloc(sizeof(t_count))))
		return (0);
	tmp = tetris;
	while ((curr = read(fd, str, 21)))
	{
		printf("initializing read checking: %d block\n", curr);
		printf("%s", str);
		str[curr] = '\0';
		last = curr;
		if (validcheck(str) != 1)
			return (0);
		tmp = ft_store(str, i, tmp);
		i++;
		count->vtetri = i;
		if (!(tmp->next = (t_tetri *)malloc(sizeof(t_tetri))))
			return (0);
		tmp = tmp->next;
		printf("valid tetri = %d\n", count->vtetri);
	}
	tmp->next = NULL;
	printf("last = %d\n", last);
	if (last != 20)
		return (NULL);
	ft_putendl("you passed");
	return (tetris);
}
