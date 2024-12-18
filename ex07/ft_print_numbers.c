/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 13:42:42 by yufli             #+#    #+#             */
/*   Updated: 2024/12/18 13:46:44 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
	int	num;

	num = 0;
	while (num <= 9)
	{
		ft_putchar(num + '0');
		num++;
	}
}

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return (0);
}