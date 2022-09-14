/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecosta- <pecosta-@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 11:00:08 by pecosta-          #+#    #+#             */
/*   Updated: 2022/09/14 17:03:25 by pecosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
//#include	<stdio.h>

int	ft_strlen(char *str);

/*int	main()
{
	char *str = "Bom dia!";
	ft_strlen(str);
	printf("%d", ft_strlen(str));	
}*/

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
			i++;
	return (i);
}	
