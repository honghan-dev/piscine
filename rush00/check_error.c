#include  <unistd.h>

int check_error(int x, int y, int argc, int rush_num)
{ 
  int max_x;
  int max_y;

  max_x = 291;
  max_y = 67;
  if (x == -1 || y == -1)
  {
    return (-1);
  }
  else if (x > max_x || y > max_y)
  {
    return (-2);
  }
  else if (rush_num < 0 || rush_num > 4)
  {
    return (-3);
  }
  return (0);
}

void  display_error_msg(int i)
{
  if (i == -1)
  {
    write(1, "Enter only positive integers\n", 29);
  }
  else if (i == -2)
  {
    write(1, "Please enter a smaller X and Y values\n", 38);
  }
  else
  {
    write(1, "Rush number must be between 0 and 4\n", 36);
  }
}