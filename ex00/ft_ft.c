/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:48:18 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/12 15:09:13 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include <stdio.h>
void	ft_ft(int * nbr);

int	main()
{
	int	x = 35;
	int * ptr = &x;
	ft_ft(ptr);
	printf("%d", x);
}

void	ft_ft(int *nbr)
{
	*nbr  = 42;
}
