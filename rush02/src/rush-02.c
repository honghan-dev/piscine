#include "../include/ft_rush.h"

int main(int argc, char *argv[])
{
	t_dict	**dict;

	if (!valid_input(argc, argv))
	{	
		print_error_message();
		return (1);
	}
	else
	{	
		if (argc == 3)
		{
			dict = get_dict(argv[1]);
			if (dict == NULL)
				return (1);
			print_text(argv[2], ft_strlen(argv[2]), dict);
		}
		else
		{
			dict = get_dict("numbers.dict");
			print_text(argv[1], ft_strlen(argv[1]), dict);
		}
		ft_deconstructor(dict);
	}
  	return (0);
}