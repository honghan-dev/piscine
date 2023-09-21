#include <unistd.h>

void  ft_putchar(char c);

void  top_row(int x, char *symbol)
{
  int i = 0;
  while (i < x)
  {
    if (i == 0)
    {
      ft_putchar(symbol[0]);
    }
    else if (i == x - 1)
    {
      ft_putchar(symbol[2]);
    }
    else
    {
      ft_putchar(symbol[1]);
    }
    i++;
  }
}

void  middle_row(int x, char *symbol)
{
  int i = 0;
  while (i < x)
  {
    if (i == 0 || i == x - 1)
    {
      ft_putchar(symbol[3]);
    }
    else
    {
      ft_putchar(' ');
    }
    i++;
  }
}

void  bottom_row(int x, char *symbol)
{
  int i = 0;
  while (i < x)
  {
    if (i == 0)
    {
      ft_putchar(symbol[5]);
    }
    else if (i == x - 1)
    {
      ft_putchar(symbol[4]);
    }
    else
    {
      ft_putchar(symbol[1]);
    }
    i++;
  }
}