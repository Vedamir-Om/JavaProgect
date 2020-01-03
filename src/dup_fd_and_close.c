/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_fd_and_close.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelphia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:42:17 by mdelphia          #+#    #+#             */
/*   Updated: 2019/12/10 11:42:19 by mdelphia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sh42.h"
// для дублирования дескрипторов
void	dup_fd_and_close(int fd, int dup_fd)
{
	if (fd != dup_fd)
	{
		dup2(fd, dup_fd);
		close(fd);
	}
}
