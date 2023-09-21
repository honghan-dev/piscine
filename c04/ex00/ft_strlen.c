/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:20:52 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 09:24:35 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/* #include <stdio.h>
int	main(void)
{
	char s1[] = "hello";
	int len = ft_strlen(s1);

	printf("len is: %d\n", len);
} */
