/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:20:00 by yufli             #+#    #+#             */
/*   Updated: 2024/12/18 17:25:07 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str);

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putstr(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
}

int	main(void)
{
	ft_putstr("Hello, World");
	ft_putchar('\n');
	return (0);
}