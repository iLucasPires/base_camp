/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 20:16:28 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/21 17:21:24 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	lowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (word == 0)
			{
				str[i] -= 32;
				word = 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}
