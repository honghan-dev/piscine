/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:27:50 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 21:14:20 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

int	*ft_range(int min, int max)
{
	int i;
	int	*array;

	if (min >= max)
		return NULL;
	i = 0;
	array = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;	
	}
	return (array);
}
/* int	main(void)
{
	int	*array;
	
	array = ft_range(-10, -5);
	for (int i = 0; i < 10; i++)
		printf("Pos %d: %d\n", i , array[i]);
} */
