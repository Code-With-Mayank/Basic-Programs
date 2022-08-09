#include <stdio.h>

int main ()
{
  int i, j, n, k, m, l, flag = 3;
  printf ("Enter the number of rows:  ");
  scanf ("%d", &n);
  m = n;
  for (k = 1; k <= m; k++)
    {
      for (i = 1; i <= (n - 1) * 2; i++)
	    printf (" ");
      if (k >= 2)
	   {
	    for ( j = 2; j <= k; j++)
	       printf ("%d ", k);
	    }
      printf ("%d ", flag++);
      if (k >= 2)
	    {
	    for (l = 2; l <= k; l++)
	        printf ("%d ", k);
	    }
      printf ("\n");
      n = n - 1;
    }
  return 0;
}
