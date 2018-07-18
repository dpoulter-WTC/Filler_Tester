/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sfiller.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 11:14:01 by dpoulter          #+#    #+#             */
/*   Updated: 2018/07/18 11:14:02 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SFILLER_H
# define SFILLER_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>

typedef struct	s_prm
{
	int			nb1;
	int			nb2;
	char		*response;
	char		*system;
	char		**player_lst;
	int			player_nb;
	int			fd;
	char		*entry;
	int			p1;
	int			p2;
	char		buf[4097];
}				t_prm;

void			map00(t_prm *prm, char player[21]);
void			map00p1(t_prm *prm, char player[21]);
void			map00p2(t_prm *prm, char player[21]);
void			map01(t_prm *prm, char player[21]);
void			map01p1(t_prm *prm, char player[21]);
void			map01p2(t_prm *prm, char player[21]);
void			map02(t_prm *prm, char player[21]);
void			map02p1(t_prm *prm, char player[21]);
void			map02p2(t_prm *prm, char player[21]);
void			print_result(char *player1, char *player2, int nb, int score);
void			show_status(double percentage);
void			run(char map[4], t_prm *prm, char player_name[21]);

#endif
