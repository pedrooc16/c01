/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:20:28 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/12 16:53:19 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 50;
	int b = 25;
	int div = 0;
	int *divptr = &div;
	int	mod = 25;
	int *modstr = &mod;

	ft_div_mod(a, b, divptr, modstr);
	printf("%d %d", div, mod);

}

void	ft_div_mod(int a, int b, int *mod, int *div)
{
	*div = a / b;
	*mod = a % b;
}
