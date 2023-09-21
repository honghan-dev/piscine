/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 20:03:49 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 20:20:19 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}

char	*ft_strdup(char *src)
{
	int	length;
	char	*dest;

	length = ft_strlen(src);
	dest = malloc(length + 1);
	ft_strcpy(dest, src);
	return dest;
}
