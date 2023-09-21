/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:23:31 by honglim           #+#    #+#             */
/*   Updated: 2023/09/19 11:16:18 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	is_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	capitalize_next(char previous_c)
{
	if (!is_number(previous_c))
		if (!(is_lower(previous_c) || is_upper(previous_c)))
			return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (is_lower(str[i]))
				str[i] = (str[i] - 'a') + 'A';
		}
		else if (capitalize_next(str[i - 1]))
		{
			if (is_lower(str[i]))
				str[i] = (str[i] - 'a') + 'A';
		}
		else if (is_upper(str[i]))
		{
			str[i] = (str[i] - 'A') + 'a';
		}
		i++;
	}
	return (str);
}
/* int main(void)
{
  char  str[] = "salUT, comMeEt tu vas";

  printf("Before: %s\n", str);
  ft_strcapitalize(str);
  printf("After : %s\n", str);
} */
