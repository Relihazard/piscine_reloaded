/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 14:07:17 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/06 14:19:10 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		result = 1;
		while (nb-- != 0)
			result = result * nb;
	}
	return (result);
}
