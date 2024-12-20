/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:01:05 by yufli             #+#    #+#             */
/*   Updated: 2024/12/20 20:13:01 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	*temp;
	int		pass;
	int		swap;

	pass = 1;
	while (pass < argc - 1)
	{
		swap = 1;
		while (swap < argc - 1)
		{
			if (ft_strcmp(argv[swap], argv[swap + 1]) > 0)
			{
				temp = argv[swap];
				argv[swap] = argv[swap + 1];
				argv[swap + 1] = temp;
			}
			swap++;
		}
		pass++;
	}
	ft_print_params(argc, argv);
	return (0);
}
