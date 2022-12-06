#include <stdio.h>
#include<cstdlib>
int main()
{
  int array[100], n, c, d, swap,count=0;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
  {count++;
//  array[c]=rand()%100;//random
    array[c]=c;//best
//  array[c]=n-c;//worst
  }
  for (c = 0 ; c < n - 1; c++)
  {count++;
    for (d = 0 ; d < n - c - 1; d++)
    {count++;
      if (array[d] > array[d+1]) 
      {count++;
        swap       = array[d];count++;
        array[d]   = array[d+1];count++;
        array[d+1] = swap;count++;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (c = 0; c < n; c++)
     printf("%d\n", array[c]);count++;
 printf("COUNT:%d",count);
  return 0;
}
