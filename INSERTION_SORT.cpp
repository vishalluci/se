#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int main()
{
	int arr[200],i,n,key,j,count=0;
	printf("Enter value :");count++;
	scanf("%d",&n);count++;
	printf("Enter value of array :\n");count++;
	for(i=0;i<n;i++)
	{
		count++;
	   arr[i]=i;//best
	 //arr[i]=rand()%100;//random
	 //arr[i]=n-i;//worst
	}
	for (i = 0; i < n; i++)
	{count++;
		key = arr[i];count++;
		j = i - 1;count++;

		while (j >= 0 && arr[j] > key)
		{count++;
			arr[j + 1] = arr[j];count++;
			j = j - 1;count++;
		}
		arr[j + 1] = key;count++;
	}
	for(i=0;i<n;i++)
	{
	 printf("%d\n", arr[i]);count++;	
	}
	printf("count :%d", count);
	
	
}
