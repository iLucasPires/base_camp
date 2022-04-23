/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:57:30 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/13 00:34:47 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int number)
{
	char	show_number;

	show_number = number + '0';
	write(1, &show_number, 1);
}

void	ft_print_comb2(void)
{	
	int		f_number;
	int		s_number;

	f_number = 0;
	while (f_number <= 99)
	{
		s_number = f_number + 1;
		while (s_number <= 99)
		{
			ft_putchar(f_number / 10);
			ft_putchar(f_number % 10);
			write(1, " ", 1);
			ft_putchar(s_number / 10);
			ft_putchar(s_number % 10);
			if (f_number != 98)
				write(1, ", ", 2);
			s_number++;
		}
		f_number++;
	}
}
