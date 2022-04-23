/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 06:42:49 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/22 14:49:26 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			while (str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i - j]);
			if (str[i] != to_find[j])
				i++;
			j = 0;
		}
	}
	return (0);
}


#include <stdio.h>

int main(void)
{
	char	*a = "abacaxi maca banana";
	char	*b = "maca";

	printf("%p\n", ft_strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
}