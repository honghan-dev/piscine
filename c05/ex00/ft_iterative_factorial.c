/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:25:19 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 13:34:00 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{	
	int	result;
	int	i;

	i = 1;
	result = 1;
	if (nb < 0)
		return 0;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/* #include	<stdio.h>

int	main(void)
{
	int nbr = 4;
	int result = ft_iterative_factorial(nbr);
	printf("result: %d\n", result);
} */
