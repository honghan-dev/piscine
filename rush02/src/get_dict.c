#include "../include/ft_rush.h"

int	open_file(char *dict_name)
{
	int	success;

	success = open(dict_name, O_RDONLY);
	return (success);
}

void	copy_line(char *line, t_dict *dict, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (line[i] != ':' && line[i] != '\0')
	{
		i++;
		j++;
	}
	dict->key = ft_strndup(line, j);
	i += 2;
	j = 0;
	while (line[i])
	{
		i++;
		j++;
	}
	dict->value = ft_strndup(line + i - j, j);
	dict->key_len = ft_strlen(dict->key);
	assign_map(dict, index);
}

t_dict	**get_dict(char *dict_name)
{	
	t_dict **dict;
	char	words[1024];
	char	**dict_array;
	int		dict_num;
	int		i;

	i = 0;
	if (read(open_file(dict_name), words, sizeof(words)) < 0)
	{	
		write(1, "Unable to read file\n", 20);
		return (NULL);
	}
	dict_num = count_strings(words, "\n");
	dict = (t_dict **)malloc(sizeof(t_dict *) * dict_num + 1);
	dict[dict_num] = NULL;
	dict_array = ft_split(words, "\n");
	while (i < dict_num)
	{
		dict[i] = (t_dict *)malloc(sizeof(t_dict));
		copy_line(dict_array[i], dict[i], i);
		i++;
	}
	free(dict_array);
	close(open_file(dict_name));
	return (dict);
}