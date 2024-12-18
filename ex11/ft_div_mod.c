/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:27:49 by yufli             #+#    #+#             */
/*   Updated: 2024/12/18 16:29:43 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(int argc, char **argv)
{
	int x = 57;
	int y = 8;
	int div;
	int mod;

	ft_div_mod(x, y, &div, &mod);
	printf("division = %i; modulo = %i\n", div, mod);
	return (0);
}