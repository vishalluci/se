#include<stdio.h>
#include<conio.h>
#include<cstdlib>
int count=0;
int binarysearch(int arr[],int beg, int end, int val){
	int mid;
	if(end>=beg)
	{ count++;
		mid=(beg+end)/2;count++;
		if(arr[mid]==val)
		{count++;
			return mid+1;count++;
		}
		else if(arr[mid]<=val)
		{count++;
			return binarysearch(arr, mid+1, end, val);count++;
		}
		else
		{count++;
			return binarysearch(arr, mid-1, end, val);count++;
		}
	}
	return -1;	
}

int main()
{
	int arr[20],i,n,key,j,count=0,val;
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

	
	printf("\nBinary Search:");
	printf("Enter the value you want to search:");
	scanf("%d", &val);
	int d=sizeof(arr)/sizeof(arr[0]);count++;
	int res=binarysearch(arr,0, n-1, val);count++;
	
	if(res==-1)
	printf("\n Element is not present in array");
	else
	printf("\n Element is present in array at %d position of array", res);count++;
		printf("\ncount :%d", count);
	return 0;
}
