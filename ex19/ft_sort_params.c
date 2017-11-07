/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrossma <agrossma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 15:51:42 by agrossma          #+#    #+#             */
/*   Updated: 2017/11/07 15:42:59 by agrossma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	**ft_sort_params(int argc, char **argv)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i + 1 < argc)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	argv = ft_sort_params(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j++]);
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
