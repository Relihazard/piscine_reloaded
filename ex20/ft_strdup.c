/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:04:45 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 16:05:36 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		index;
	int		length;
	char	*res;

	length = 0;
	while (*(src + length))
		length++;
	res = (char *)malloc(length + 1);
	if (res == NULL)
		return (0);
	index = 0;
	while (index < length)
	{
		res[index] = src[index];
		index++;
	}
	res[index] = '\0';
	return (res);
}
