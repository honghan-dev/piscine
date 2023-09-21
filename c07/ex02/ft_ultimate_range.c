/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:57:32 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 20:57:33 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*num_array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	num_array = (int *)malloc(sizeof(int) * (max - min));
	if (num_array == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < max - min)
			num_array[i] = min + i;
		*range = num_array;
		return (i);
	}
}