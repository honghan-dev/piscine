/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:17:36 by honglim           #+#    #+#             */
/*   Updated: 2023/09/19 11:21:08 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	s1[] = "HELLO";
	char	s2[] = "";

	int r1 = ft_str_is_uppercase(s1);
	int	r2 = ft_str_is_uppercase(s2);

	printf("result: %d\n", r1);
	printf("result: %d\n", r2);
}
*/
