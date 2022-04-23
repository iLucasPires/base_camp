/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:08:24 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/11 03:19:45 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line(int x, char beg, char mid, char end)
{
	int		auxiliary;

	auxiliary = 1;
	if (x >= 1 && auxiliary <= x)
	{
		ft_putchar(beg);
	}
	if (x >= 2)
	{
		while (auxiliary <= x - 2)
		{
			ft_putchar(mid);
			auxiliary++;
		}
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	if (x > 0)
	{
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int		auxiliary;

	auxiliary = 1;
	if (y >= 1)
	{
		line (x, 'A', 'B', 'C');
	}
	while (auxiliary < y - 1)
	{
		line(x, 'B', ' ', 'B');
		auxiliary++;
	}
	if (y > 1)
	{
		line (x, 'A', 'B', 'C');
	}
}
