/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 21:12:07 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 17:19:58 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/* #include <string.h>
#include <stdio.h>
int	main()
{
	char *src = "hello";
	char dest[10];
	unsigned int size = 5;
	
//	ft_strncpy(dest, src, size);

	strncpy(dest, src, size);

	for (int i = 0; i < (int )size; i++)	
	{
		printf("%d: %c\n", i, dest[i]);
	}
	printf("Src : %s\n", src);
	printf("Dest: %s\n", dest);
} */
