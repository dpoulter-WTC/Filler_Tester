/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoulter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 10:57:27 by dpoulter          #+#    #+#             */
/*   Updated: 2018/07/18 11:00:29 by dpoulter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sfiller.h"

void	run(char maps[4], t_prm *prm, char player_name[21])
{
	if (strcmp(maps, "1") == 0)
		map00(prm, player_name);
	if (strcmp(maps, "2") == 0)
		map01(prm, player_name);
	if (strcmp(maps, "3") == 0)
		map02(prm, player_name);
	if (strcmp(maps, "all") == 0)
	{
		map00(prm, player_name);
		map01(prm, player_name);
		map02(prm, player_name);
	}
}
