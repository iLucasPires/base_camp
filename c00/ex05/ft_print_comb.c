/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:37:50 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/12 20:29:59 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = 48;
	number[1] = 49;
	number[2] = 50;
	while (number[0] <= 57)
	{
		while (number[1] <= 57)
		{
			while (number[2] <= 57)
			{
				write(1, &number[0], 1);
				write(1, &number[1], 1);
				write(1, &number[2], 1);
				number[2]++;
				if (number[0] != 55)
					write (1, ", ", 2);
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		number[1] = number[0] + 1;
		number[0]++;
	}
}
