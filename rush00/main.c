/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 05:16:43 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/12 02:38:34 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(void)
{
	rush ('4', '3');
	rush (5, 1);
	rush (1, 1);
	rush (1, 5);
	rush (4, 4);
	return (0);
}
