/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 01:47:58 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/21 23:30:04 by lpires-n         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	index;

	size = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0')
	{
		dest[size] = src[index];
		size++;
		index++;
	}
	dest[size] = '\0';
	return (dest);
}
