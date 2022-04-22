/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:22:56 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/21 17:16:32 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{	
	int	index;
	int	validate;

	index = 0;
	validate = 0;
	if (str[index] == '\0')
		return (1);
	while (str[index] != '\0')
	{
		if (str[index] >= '0' && str[index] <= '9')
			validate = 1;
		else
		{	
			validate = 0;
			break ;
		}
		index++;
	}
	return (validate);
}
