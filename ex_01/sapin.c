#include <stdio.h>

void	tronc_affich(int size)
{
  int	i;
  int	j;
  int	k;
  int	tree_larg;

  tree_larg = (size%2 == 0) ? size + 1 : size;
  i = 0;
  if (size == 1)
    printf("%s\n", "   |");
  else
    {
      while (i++ < size)
	{
	  k = 0;
	  while (k++ < (branche_last_line(size)/2)-(tree_larg/2))
	    putchar(' ');
	  putchar('|');
	  j = 0;
	  while (j++ < tree_larg-1)
	    putchar('|');
	  putchar('\n');
	}
    }
}

int	branche_last_line(int size)
{
  int	res;
  int	i;
  int	k;

  i = 0;
  k = 1;
  while (i++ < size)
    res = (((k++)+2)*2) + branche_first_line(size);
  return (res);
}

int	branche_first_line(int size)
{
  int	res;
  int	i;
  int	res_before;
  int	k;

  k = 2;
  res_before = 1;
  i = 1;
  if (size == 1)
    return(1);
  while (i++ < size)
    {
      if (k % 2 == 0)
	{
	  res = res_before + (2 + k++);
	  res_before = res;
	}
      else
	{
	  res = res_before + (k++ + 3);
	  res_before = res;
	}
    }
  return (res);
}

void	 trapeze(int size, int f)
{
  int	j;
  int	i;
  int	k;
  int	li;
  int	g;

  li = size + 3;
  i = 3;
  j = 0;
  g = branche_first_line(size);
  k = 0;
  while (j < li)
    {
      while (k++ < (f - (g+(j*2))) / 2 )
	  putchar(' ');  
      i = 0;
      while (i++ < g + (j*2))
	  putchar('*');
      putchar('\n');
      j++;
      k = 0;
    }
}

void	sapin(int size)
{
  int	i;
  int	last;

  if (size <= 0)
    printf("This must be a positive number por favor :-)!!\n");
  i = 1;
  last = branche_last_line(size);
  while (i <= size)
    trapeze(i++, last);
  tronc_affich(size);
}

int main(int argc, char *argv[])
{
  int sap;
  sap = atoi(argv[1]);
  sapin(sap);
  return 0;
}

