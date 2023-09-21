/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:16:31 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 13:16:13 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_sign(char i)
{	int sign;

	sign = 1;
	if (i == '-')
	{
		sign = -sign; 
		return (sign);
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i])
	{	
		if (str[i] == '-' || str[i] == '+')
			sign = sign * get_sign(str[i]);
		else if (str[i] >= '0' && str[i] <= '9')
			result = (result * 10) + (str[i] - '0');
		else
			return (result * sign);
		i++;
	}
	return (result * sign);
}
/* #include	<stdio.h>
int	main(void)
{
	char	str[] = "--+--+1234ab567";
	int nbr = ft_atoi(str);
	printf("result: %d", nbr);
} */
