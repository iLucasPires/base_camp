/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpires-n <lpires-n@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 23:57:47 by lpires-n          #+#    #+#             */
/*   Updated: 2022/04/22 04:54:39 by lpires-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b ;
}

#include <stdio.h>

int main(void)
{
	int a = 50;
	int b = 2;
	
	int div = 0;
	int mod = 0;
	
	printf("antes \n");
	printf("mod: %i \n", mod);
	printf("div: %i \n", div);
	
	ft_div_mod(a, b, &div, &mod);
	
	printf("depois \n");
	printf("mod: %i \n", mod);
	printf("div: %i \n", div);
}


int array[10];

array[1] = array + 1
int sla, sla_tbm;

int *ponterio; 



&ponterio; 
