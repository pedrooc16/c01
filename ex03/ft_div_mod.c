/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 16:20:28 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/14 16:46:00 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*int	main(void)
{
	int a = 50;
	int b = 25;
	int div = 0;
	int *divptr = &div;
	int	mod = 25;
	int *modstr = &mod;

	ft_div_mod(a, b, divptr, modstr);
	printf("%d %d",*divptr, *modstr);

}*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
