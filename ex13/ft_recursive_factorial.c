/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 03:48:41 by yufli             #+#    #+#             */
/*   Updated: 2024/12/21 03:51:57 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
        if (nb == 0)
                return (1);
        else
                return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	ft_recursive_factorial(5);
	printf("%i\n", ft_recursive_factorial(5));
	return (0);
}