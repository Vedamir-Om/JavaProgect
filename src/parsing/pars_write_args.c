/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_write_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:02:04 by mdelphia          #+#    #+#             */
/*   Updated: 2020/02/16 22:02:06 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh42.h"

static int	mlc_args(t_pars_list *list)
{
	if (!(list->pars_args == (char **)malloc(sizeof(char *) * (функция для определения количества аргументов + 1))))
		return (1);	//////// завершение работы 42sh
	list->pars_args[0] = NULL;
	return (0);
}

static char	*skip_pas(char *pointstr, char *end)
{
	while ((pointstr < end) && ((*pointstr <= 32) || (*pointstr == -1)))
		pointstr++;
	return (pointstr);
}

char		*pars_write_args(t_pars_list *list, char *mainline, char *end)
{
	char *pointstr;

	if (!mainline)
		return (NULL);
	pointstr = mainline;
	while (*pointstr && pointstr < end)
	{
		if ((*pointstr <= 32) || (*pointstr == -1))
			pointstr = skip_pas(pointstr, end);
		else if (*pointstr && (*pointstr != -1))
			pointstr = pars_fill_args(list, pointstr, end);
	}
	return (pointstr);
}