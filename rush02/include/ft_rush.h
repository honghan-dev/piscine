#ifndef FT_RUSH_H
# define FT_RUSH_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_dict 
{
	char *key;
	char *value;
	int key_len;
	int	map;
} t_dict;

int		valid_nbr(char *str);
int		valid_dict(char *str);
int		valid_input(int ac, char **av);
void	print_error_message();
void	ft_putstr(char *str);
char	*ft_strncpy(char *dest, char *src, int size);
char	*ft_strndup(char *src, int size);
int		is_sep(char c, char *charset);
int		count_strings(char *str, char *charset);
void	copy_string(char *dest, char *src, char *charset);
void	split_strings(char **arrays, char *str, char *charset);
char	**ft_split(char *str, char *charset);
int		open_file(char *dict_name);
t_dict	**get_dict(char *dict_name);
void	assign_map(t_dict *dict, int index);
void	get_word_by_map(t_dict **dict, int map);
int		ft_strlen(char *str);
int		is_zero(char *chr, int len);
void	blockofoutput(char *nbr, int size, t_dict **dict);
void	print_text(char *nbr, int size, t_dict **dict);
void	ft_deconstructor(t_dict **dict);

#endif