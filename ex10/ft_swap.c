/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 15:04:45 by yufli             #+#    #+#             */
/*   Updated: 2024/12/18 15:34:26 by yufli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)	
// Main Function Parameter Types:
// int argc: Represents the number of command-line arguments; Always an integer; Includes the program name as the first argument.
// char **argv: An array of strings (character pointers); Each element is a pointer to a command-line argument string.
{
	int x = 5;
	int y = 6;

	printf("x = %d; y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("swap x = %d; swap y = %d\n", x, y);
	return (0);
}
