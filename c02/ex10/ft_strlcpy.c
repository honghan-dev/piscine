/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Han <Han@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:27:31 by honglim           #+#    #+#             */
/*   Updated: 2023/09/19 20:07:39 by Han              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char*src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (src[i] && i < size - 1)
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src = "hello";
	char	dest[10];
	unsigned int size = 5;
	
	ft_strlcpy(dest, src, size);
	
	// strlcpy(dest, src, size);
	
	for (int i = 0; i < (int )size; i++)	
	{
		printf("%d: %c\n", i, dest[i]);
	}
	printf("src : %s\n", src);
	printf("dest: %s\n", dest);
} */