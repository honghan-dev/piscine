#include "../include/ft_rush.h"

void	get_word_by_map(t_dict **dict, int map)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (dict[i]->map == map)
		{
			ft_putstr(dict[i]->value);
			return ;
		}
		i++;
	}
}

void	assign_map(t_dict *dict, int index)
{	
	if (index >= 0 && index <= 19)
		dict->map = index;
	else if (index >= 20 && index <= 28)
		dict->map = index + 2;
	else if (index > 28)
		dict->map = (30 + ((index + 2 - 30) * 3));
}