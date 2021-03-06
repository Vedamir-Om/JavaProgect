/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:58:37 by mdelphia          #+#    #+#             */
/*   Updated: 2019/04/10 14:58:42 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	if (*s1 == *s2 && !(*s1))
		return (1);
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
		if (!s1[i] && !s2[i])
			return (1);
	}
	return (0);
}
