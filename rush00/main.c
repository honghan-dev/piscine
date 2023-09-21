#include <unistd.h>
#include <stdio.h>

char *g_symbol;

void  rush(int x, int y);
int custom_atoi(char *str);
int check_error(int x, int y, int argc, int rush_num);
void  display_error_msg(int i);

int main(int argc, char *argv[])
{ 
  if (argc != 4)
  {
    write(1, "Error: Please enter 3 inputs\n", 30);
    return (1);
  }
  int x = custom_atoi(argv[1]);
  int y = custom_atoi(argv[2]);
  int rush_num = custom_atoi(argv[3]); 
  int error = check_error(x, y, argc, rush_num);

  if (error < 0)
  { 
    display_error_msg(error);
    return (1);
  }
  char  *rush_symbols[] = {"o-o|oo", "/*\\*/\\", "ABABCC", "ABCBCA", "ABCBAC"};
  g_symbol = rush_symbols[rush_num];
  rush(x, y);
  return (0);
}

int custom_atoi(char *str)
{
  int i = 0;
  int result = 0;

  while (str[i])
  { 
    if (str[i] == '-')
    {
      return (-1);
    }
    else if (str[i] == '+')
    {
      i++;
    }
    else if (str[i] >= '0' && str[i] <= '9')
    {
      result = (result * 10) + (str[i] - '0');
    }
    else
    {
      return (-1);
    }
    i++;
  }
  return (result);
}

