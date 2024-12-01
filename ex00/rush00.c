/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 20:18:24 by noavetis          #+#    #+#             */
/*   Updated: 2024/12/01 18:29:38 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print(int i, int j, int x, int y)
{
	if ((i == 1 || i == y) && (j != x && j != 1))
		ft_putchar('-');
	else if ((j == 1 || j == x) && (i != 1 && i != y))
		ft_putchar('|');
	else if ((i == 1 && j == 1) || (i == 1 && j == x))
		ft_putchar('o');
	else if ((i == y && j == 1) || (i == y && j == x))
		ft_putchar('o');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 2147483647 && x > 0 && y > 0 && y <= 2147483647)
	{
		i = 1;
		j = 1;
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				print(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		write(1, "error", 5);
}
