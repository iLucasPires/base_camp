/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 15:31:31 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/17 19:54:51 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		index;
	int		swap;

	index = 0;
	while (index < size)
	{
		swap = tab[size - 1];
		tab[size -1] = tab[index];
		tab[index] = swap;
		size--;
		index++;
	}
}
