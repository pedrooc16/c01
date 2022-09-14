/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:17:41 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/14 16:27:15 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/*int	main()
{
	int	tab[9] = {5, 25, 35, 45, 55, 65, 75, 85, 95};
	int	size	=  9;
	ft_rev_int_tab(tab, size);
	int	i = 0;
	while (i <= 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		swap;

	i = 0;
	while (i < size / 2)
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}		
