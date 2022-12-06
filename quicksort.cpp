#include<stdio.h>
#include<stdlib.h>
void quicksort(int arr[100],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(arr[i]<=arr[pivot]&&i<last)
         i++;
         while(arr[j]>arr[pivot])
         j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
   }
}
int main(){
   int i,n, arr[100];
   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);
   printf("The elements of array are: ");
   	for(i=0;i<n;i++)
	{
	 //  arr[i]=i;//best
	 arr[i]=rand()%100;//random
	 //arr[i]=n-i;//worst
	}
	
	for(i=0;i<n;i++)
	{
	 printf("%d\n", arr[i]);	
	}
   quicksort(arr,0,n-1);
   printf("Order of Sorted elements: ");
   for(i=0;i<n;i++)
   printf(" %d",arr[i]);
   return 0;
}
