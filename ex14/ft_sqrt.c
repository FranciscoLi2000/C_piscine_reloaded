/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 22:43:28 by yufli             #+#    #+#             */
/*   Updated: 2024/12/20 23:25:40 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	middle;

	if (nb < 0)
		return (0);
	else
		i = 1;
		while (i*i < nb) 
			i++;
	return (i);
}

int	main(void)
{
	int	num;

	num = 9;
	printf("%i\n", ft_sqrt(num));
	return (0);
}