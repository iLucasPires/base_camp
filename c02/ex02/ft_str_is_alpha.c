/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:48:33 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/20 00:08:34 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{	
	int	i;
	int	validate;

	i = 0;
	validate = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			validate = 1;
		else if (str[i] >= 65 && str[i] <= 90)
			validate = 1;
		else
		{	
			validate = 0;
			break ;
		}
		i++;
	}
	return (validate);
}
