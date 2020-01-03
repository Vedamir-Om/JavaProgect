/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putspase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:05:15 by mdelphia          #+#    #+#             */
/*   Updated: 2019/08/15 15:05:18 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putspase(int len)
{
	char	buf[1024];
	size_t	i;

	i = 0;
	if (len > 0)
	{
		while (len--)
			buf[i++] = ' ';
		buf[i] = '\0';
		ft_putstr(buf);
	}
}
