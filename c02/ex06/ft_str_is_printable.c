/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 14:40:31 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/22 19:15:18 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	validate;

	i = 0;
	validate = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
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

#include <stdio.h>
#include <stdlib.h>

int    ft_str_is_printable(char *str);

int    main(void)
{
    char *str1;
    char *str2;
    char *str3;
    char *str4;

    str1 = calloc(10, sizeof(char));
    str2 = calloc(10, sizeof(char));
    str3 = calloc(10, sizeof(char));
    str4 = calloc(10, sizeof(char));
    str1 = "ABCDEFGHI";
    str2 = "BCDEFGHI";
    str3 = "ABCDEFGHI";
    str4 = "ABCDEFGH";
    printf("str1: %s, is_printable: %d\n", str1, ft_str_is_printable(str1));
    printf("str2: %s, is_printable: %d\n", str2, ft_str_is_printable(str2));
    printf("str3: %s, is_printable: %d\n", str3, ft_str_is_printable(str3));
    printf("str4: %s, is_printable: %d\n", str4, ft_str_is_printable(str4));
    return (0);
}