/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 16:12:19 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/06 16:22:44 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(int) * (max - min));
	while (min != max)
		*tab++ = min++;
	return (tab);
}
