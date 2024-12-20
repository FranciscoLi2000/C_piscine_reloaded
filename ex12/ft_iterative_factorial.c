/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 00:13:21 by yufli             #+#    #+#             */
/*   Updated: 2024/12/21 00:25:43 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb < 0)
		return (0);
	else
	{
		i = 1;
		result = 1;
		while (i <= nb)
		{
			result = result * i;
			i++;
		}
		return (result);
	}
}

int	main(void)
{
	ft_iterative_factorial(5);
	printf("%i\n", ft_iterative_factorial(5));
	return (0);
}