/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaetern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 15:25:40 by ksaetern          #+#    #+#             */
/*   Updated: 2017/03/14 15:39:26 by ksaetern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/stat.h>

typedef struct	s_count
{
	int					vtetri;
}						t_count;

typedef	struct  s_tetri
{
	int					x1;
	int					y1;
	int					xpos[4]; 
	int					ypos[4];
	char				letter;
	struct  s_tetri		*next;
	struct  s_tetri		*prev;
}					t_tetri;

int			connect_check(char *str);
int			size_check(char *str, int hash, int y, int x);
int			validcheck(char *str);
t_tetri		*readchecks(int fd);
void		ft_putendl(char const *s);
t_tetri		*ft_store(char *str, int i, t_tetri *tmp);
t_tetri		ft_storexy(char **str, t_tetri *newtetri, int j, int i);
char		**ft_strsplit(char const *s, char c);
void		ft_xydistance(t_tetri *newtetri, int j, int k, int i);
int			ft_mapmin(t_tetri *tetri);
char		**ft_mapmaker(char **map, int min);
char		**ft_solved(t_tetri *tetri);
void		*ft_memset(void *b, int c, size_t len);
char		*ft_strnew(size_t size);
char		**ft_solve(char **map, int min, t_tetri *tetri);


#endif
