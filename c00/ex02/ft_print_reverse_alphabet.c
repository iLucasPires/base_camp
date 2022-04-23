/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:18:39 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/12 18:09:48 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int		counter;
	char	alphabet;

	counter = 0;
	alphabet = 122;
	while (counter < 26)
	{
		write(1, &alphabet, 1);
		counter ++;
		alphabet --;
	}
}
