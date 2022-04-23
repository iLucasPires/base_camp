/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:42:58 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/23 01:57:45 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	index;

	size = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0' && index < nb)
	{
		dest[size] = src[index];
		size++;
		index++;
	}
	dest[size] = '\0';
	return (dest);
}


#include <stdio.h>

int	main(void)
{
	char	a[] = "abcde";
	char	b[] = "abcdfas";
	int	n = 4;
	
	printf("%s\n", ft_strncat(a, b, n));
}