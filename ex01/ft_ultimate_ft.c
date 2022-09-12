/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:53:56 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/12 15:07:01 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include <stdio.h>
void	ft_ultimate_fr(int ****nbr);

int	main()
{
	int	A = 25;
	int * ptr1 = &A;
   	int ** ptr2 = &ptr1;
	int *** ptr3 = &ptr2;
	int	**** ptr4 = &ptr3;	
	ft_ultimate_fr(ptr4);
	printf("%d", A);
	
}

void	ft_ultimate_fr(int ****nbr)
{
	****nbr = 42;
}
	
