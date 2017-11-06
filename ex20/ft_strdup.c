/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:04:45 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/06 16:21:45 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	while (*src)
		*copy++ = *src++;
	*copy = '\0';
	return (copy);
}
