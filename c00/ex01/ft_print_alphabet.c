/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:18:39 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/12 18:10:52 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		counter;
	char	alphabet;

	counter = 0;
	alphabet = 97;
	while (counter < 26)
	{
		write(1, &alphabet, 1);
		counter ++;
		alphabet ++;
	}
}
