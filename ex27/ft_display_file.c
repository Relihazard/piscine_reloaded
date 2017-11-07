/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:47:23 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 14:59:47 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *path)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE + 1];

	fd = open(path, O_RDONLY);
	while ((ret = read(fd, buffer, BUFFER_SIZE)) != 0)
	{
		ft_putstr(buffer);
	}
	close(fd);
}
