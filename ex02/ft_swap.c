/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:17:26 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/12 14:23:23 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 50;
	int b = 30;
	ft_swap(&a, &b);
	printf("O valor de A e: %d, o valor de b E %d/n", a, b);
	
}
void	ft_swap(int *a, int *b)
{
	int	c;
	c = *a;
	*a = *b;
	*b = c;


}
