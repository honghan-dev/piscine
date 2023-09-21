#include <unistd.h>

extern char *g_symbol;

void  ft_putchar(char c);

void  top_row(int x, char *symbols);
void  middle_row(int x, char *symbols);
void  bottom_row(int x, char *symbols);

void  rush(int x, int y)
{
  int i = 0;

  while (i < y)
  {
    if (i == 0)
    {
      top_row(x, g_symbol);
    }
    else if (i == y - 1)
    {
      bottom_row(x, g_symbol);
    }
    else
    {
      middle_row(x, g_symbol);
    }
    ft_putchar('\n');
    i++;
  }
}