/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:43:33 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/14 16:51:25 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*int	main(void)
{
	int a = 50;
	int b = 25;
	ft_ultimate_div_mod(&a, &b);
	printf("O valor de A e %d e o valor de B e %d", a, b);

}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		auxl1;
	int		auxl2;

	auxl1 = *a / *b;
	auxl2 = *a % *b;
	*a = auxl1;
	*b = auxl2;
}
