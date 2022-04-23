/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:03:49 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/23 01:51:12 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && (s1[index] != '\0' || s2[index] != '\0'))
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}


#include <stdio.h>

int	main(void)
{
	char	*a = "dsadsada";
	char	*b = "a";
	
	printf("%i\n", ft_strcmp(a, b));
}
