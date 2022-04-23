/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 19:45:57 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/12 15:26:04 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{	
	int		counter;
	char	number;

	counter = 0;
	number = 48;
	while (counter <= 9)
	{
		write(1, &number, 1);
		number ++;
		counter ++;
	}
}
