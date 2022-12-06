#include <stdio.h>
#include<cstdlib>
int main() {
   int arr[100], n, c, d,i, j, position, swap,count=0;
   printf("Enter number of elements\n");
   scanf("%d", &n);
   
  for (c = 0; c < n; c++)
  {count++;
    //arr[c]=rand()%100;//random
    //arr[c]=c;//best
    //arr[c]=n-c;//worst
  }
  //WITHOUT
  for (i= 0; i < n; i++)
      printf("%d\n", arr[i]);
   printf("RESULT:");
   
   for (i = 0; i < (n - 1); i++)
   {count++;
      position = i;count++;
      for (j = i + 1; j < n; j++) 
	  {count++;
         if (arr[position] > arr[j])
            position = j;count++;
      }
      if (position != i)
	   {
         swap = arr[i];count++;
         arr[i] = arr[position];count++;
         arr[position] = swap;count++;
      }
   }
   //AFTER
   for (i = 0; i < n; i++)
      printf("%d\n", arr[i]);
    printf("count:%d",count);  
   return 0;
}
