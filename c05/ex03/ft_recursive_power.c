/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:03:21 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 14:11:35 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return nb * ft_recursive_power(nb, power - 1);
}
/* #include <stdio.h>
int	main(void)
{
	int result = ft_recursive_power(5, 5);

	printf("Result: %d", result);
} */
