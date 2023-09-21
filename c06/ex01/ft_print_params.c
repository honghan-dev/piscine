/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: honglim <honglim@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:23:02 by honglim           #+#    #+#             */
/*   Updated: 2023/09/21 19:30:15 by honglim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	main(int argc, char *argv[])
{	
	int	i;
	int	j;

	i = 1;
	if (argc > 1)
	{	
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				write(1, &argv[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
}
