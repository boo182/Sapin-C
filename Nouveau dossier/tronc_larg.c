int	tronc_larg(int size)
{
  int tree_larg;

  if(size%2 == 0)
    {
      tree_larg = size + 1;
    }
  else
    {
      tree_larg = size;
    }
  return(tree_larg);
}
