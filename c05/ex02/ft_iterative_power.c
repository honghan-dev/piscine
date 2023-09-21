/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:49:21 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 14:02:31 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power)
	{
		result = result * nb;
		power--;
	}
	return (result);

}
/* #include <stdio.h>
int	main(void)
{
	int	nb = 4;
	int	power = 4;
	int	result = ft_iterative_power(nb, power);
	
	printf("result: %d\n", result);
} */
