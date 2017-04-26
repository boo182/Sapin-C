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
