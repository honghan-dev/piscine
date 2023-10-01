#include "../include/ft_rush.h"

int	ft_strlen(char *str)
{
	int		count;
	char	*ptr;

	ptr = str;
	count = 0;
	while (*ptr)
	{
		count++;
		ptr++;
	}
	return (count);
}

int	is_zero(char *chr, int len)
{
	while (--len >= 0)
	{
		if (chr[len] != '0')
			return (0);
	}
	return (1);
}

// hundred -> 1 ~ 9, tens -> 2 ~ 9, ones -> 1 ~ 9,
void	blockofoutput(char *nbr, int size, t_dict **dict)
{
	int	i;
	int	rev_i;

	i = -1;
	while (nbr[++i] && i < size)
	{
		if (nbr[i] > '0' && nbr[i] <= '9')
		{
			rev_i = size - i;
			if (rev_i == 3)
			{
                //rev_i == 3 -> 3 digit
                //map[nbr[i]-'0'], if map['9'-'0'] -> write(1,"nine",4)
				// write(1, map[nbr[i] - '0'], ft_strlen(map[nbr[i] - '0']));
        		get_word_by_map(dict, (nbr[i] - '0'));
				write(1, " ", 1);
                //map[30] is "hundred"
				// get_word_by_map(dict, 30);
				// write(1, map[30], ft_strlen(map[30]));
        		get_word_by_map(dict, 30);
			}
			else if (rev_i == 2 && nbr[i] > '1')
                //rev_i == 2 -> 2 digit, but only those which is >= 20
                //map[2+20] -> "twenty", map[3+20] -> "thirty"
                get_word_by_map(dict, ((nbr[i] - '0') + 20));
				// write(1, map[(nbr[i] - '0') + 20], ft_strlen(map[(nbr[i] - '0') + 20]));
			else if (rev_i == 2 && nbr[i++] == '1')
                //rev_i == 2 -> 2 digit, but <=19 (actually no need check for '1', but I need the i++ xDDDDD)
                //map[10 + ('5'-'0')] -> fifteen
                get_word_by_map(dict, (10 + (nbr[i] - '0')));
				// write(1, map[10 + (nbr[i] - '0')], ft_strlen(map[10 + (nbr[i] - '0')]));
			else
                //rev_i == 1 -> 1 digits
                //map['4'-'0'] -> "four"
				// write(1, map[nbr[i] - '0'], ft_strlen(map[nbr[i] - '0']));
        		get_word_by_map(dict, (nbr[i] - '0'));
				write(1, " ", 1);
		}
	}
}

void	print_text(char *nbr, int size, t_dict **dict)
{
	int	i;
	int	rev_i;
	int	offset;

	if (nbr[0] == '0' && size == 1)
	{ 
		get_word_by_map(dict, 0);
		// write(1, map[0], ft_strlen(map[0]));
		return ;
	}
	i = 0;
	while (i < size)
	{
        //if there is block of zero, eg 1 000 121, skip the 000
		while (nbr[i] && is_zero(&nbr[i], 3))
			i += 3;
		rev_i = size - i;
        //rev_i a.k.a. reverse_i, represent number of digit counting from the least significant
        //offset would be usual 3, except for the leading digit.
        //eg: 15 321, then first offset would be 2.
        //there is 7 digits, offset = 5 % 3 + (5 % 3 == 0) * 3 = (2 + 0 * 3) = 2
        //the (rev_i % 3 == 0) *3, is for when rev_i is diversable by 3
        //eg: 231, 3 digits, offset = 3 % 3 + (3 % 3 == 0) * 3 = (0 + 1 * 3) = 3
		offset = rev_i % 3 + (rev_i % 3 == 0) * 3;
		blockofoutput(&nbr[i], offset, dict);
		if (rev_i > 3)
		{
            //if there more than 3 digits, I have to print the postfix, like ("thousand","million"...)
            //eg: 5 212,      rev_i = 4, offset = 1, map[30 + 3] -> "thousand"
            //eg: 23 123 423, rev_i = 8, offset = 2, map[30 + 6] -> "million"
			// write(1, map[30 + rev_i - offset], ft_strlen(map[30 + rev_i - offset]));
			get_word_by_map(dict, (30 + rev_i - offset));
			write(1, " ", 1);
		}
		i += offset;
	}
}