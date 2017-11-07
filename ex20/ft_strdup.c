/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:04:45 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 15:47:02 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	char	*str;
	int		len;

	len = 0;
	while (src[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	str = copy;
	while (*src)
		*str++ = *src++;
	*str = '\0';
	return (str);
}
