#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "sapin.h"

void	tronc_affich(int size)
{
  int i;
  int j;
  int k;
  i = 0;
  if(size == 1)
    {
      printf("%s\n", "   |");
    }
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
	{
	  putchar('|');
	}
      putchar('\n');
    }
}
}
