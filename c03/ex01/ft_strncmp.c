/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:51:27 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/23 01:53:59 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;
	unsigned int	value;

	index = 0;
	value = 0;
	while (index < n)
	{
		if (s1[index] == s2[index] && s1[index] != '\0')
			value = (unsigned char)s1[index] - (unsigned char)s2[index];
		else
		{
			value = (unsigned char)s1[index] - (unsigned char)s2[index];
			break ;
		}
		index++;
	}
	return (value);
}

#include <stdio.h>

int	main(void)
{
	char	*a = "abcde";
	char	*b = "abcdfas";
	int		size = 5;
	
	printf("%i\n", ft_strncmp(a, b, size));
}
