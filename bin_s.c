#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[500],i,n, low, high, mid, count=0, val, c;
	int b=0;
	int l=0;
	printf("Enter value :");count++;
	scanf("%d",&n);count++;
	printf("The value of array :\n");count++;
	for(i=0;i<n;i++)
	{
		count++;
	   arr[i]=i;//best
	 //arr[i]=rand()%100;//random
	 //arr[i]=n-i;//worst
	}

	for(i=0;i<n;i++)
	{
	 printf("%d\n", arr[i]);count++;	
	}
	
	printf("\nBinary Search: \n");
	printf("Enter value to find:");
	scanf("%d", &val);b++; l++;
	low = 0;b++;
	high = n - 1;b++;
	mid = (low+high)/2;b++;
	while (low <= high) {
		b++;
	if(arr[mid] < val){
	b++;
		low = mid + 1;
		}
	else if (arr[mid] == val) {
		b++;
		printf("%d found at location %d", val, mid+1);
	break;
	}
	else
		high = mid - 1;b++;
	mid = (low + high)/2;b++;
	}
	if(low > high)
	printf("Not found! %d isn't present in the list.\n", val);b++;
	
	printf("\nNumber of counts in binary search is:%d\n", b);
	
	//linear search
	for (c = 0; c < n; c++)
  {	l++;
    if (arr[c] == val)   
    { l++;
      printf("%d is present at location %d.\n", val, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d isn't present in the array.\n", val); l++;
printf("The count for the linear search is:%d\n", l);

 	return 0;
}
