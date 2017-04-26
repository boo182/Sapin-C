int	branche_last_line(int size)
{
  int res;
  int i;
  int k;
  i = 0;
  k = 1;
  while(i++ < size)
    {
      res = (((k++)+2)*2) + branche_first_line(size);
    }
  return (res);
}



