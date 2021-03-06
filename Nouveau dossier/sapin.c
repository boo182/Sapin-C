#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	tronc_larg(int size)
{
  int tree_larg;
  if(size%2 == 0)
    tree_larg = size + 1;
  else
    tree_larg = size;
  return(tree_larg);
}
int	tronc_haut(int size)
{
  int tree_haut;
  tree_haut = size;
  return(tree_haut);
}

void	tronc_affich(int size)
{
  int i;
  int j;
  int k;
  i = 0;
  if(size == 1)
    printf("%s\n", "   |");
  else
    {
      while(i++ < tronc_haut(size))
	{
	  if(size % 2 == 0)
	    {
	      k = 0;
	      while(k < (branche_last_line(size)/2)-(tronc_larg(size)/2))
		{
		  putchar(' ');
		  k++;
		}
	    }
	  else
	    {
	      k = 0;
	      while(k++ < (branche_last_line(size)/2)-(tronc_larg(size)/2))
		{
		  putchar(' ');
		}
	    }
	  putchar('|');
	  j = 0;
	  while(j++ < tronc_larg(size)-1)
	    putchar('|');
	  putchar('\n');
	}
    }
}

int	branche_last_line(int size)
{
  int res;
  int i;
  int k;
  i = 0;
  k = 1;
  while(i++ < size)
    res = (((k++)+2)*2) + branche_first_line(size);    
  return (res);
}

int	branche_first_line(int size)
{
  int res;
  int i;
  int res_before;
  int k;
  k = 2;
  res_before = 1;
  i = 1;
  if(size == 1)
    {
      res = 1;
      return(res);
    }
  while(i < size)
    {
      if(k % 2 == 0)
	{
	  res = res_before + (2 + k++);
	  res_before = res;
	}
      else
	{
	  res = res_before + (k++ + 3);
	  res_before = res;
	}
      i++;
    }
  return (res);
}

void	 trapeze(int size, int f)
{
  int j;
  int i;
  int k;
  int li;
  int g;
  li = size + 3;
  i = 3;
  j = 0;
  g = branche_first_line(size);
  k = 0;
  while (j < li)
    {
      while(k < (f - (g+(j*2))) / 2 )
	{ 
	  putchar(' ');
	  k++;	  
	}
      i = 0;
      while(i < g + (j*2))
	{
	  putchar('*');
	  i++;  
	}
      putchar('\n');
      j++;
      k = 0;
    }
}

void	sapin(int size)
{
   if(size <= 0)
    {
      printf("This must be a positive number por favor :-)!!\n");
      } 
  int i;
  i = 1;
  int last;
  last = branche_last_line(size);
  while(i <= size)
    {
      trapeze(i, last);
      i++;
    }
  tronc_affich(size);
}




int main(int argc, char *argv[])
{
  int sap;
  sap = atoi(argv[1]);
  sapin(sap);
  return 0;
}

