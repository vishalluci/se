#include<stdio.h>
int count=0;
void heapsort(int[],int); 
void heapify(int[],int);
void adjust(int[],int);
int main() {
	int n,i,a[200];
	printf("\nEnter the limit:");
	scanf("%d",&n);
	printf("\nEnter the elements:");
	for (i=0;i<n;i++)
	  {
	  	//a[i]=rand()%100;//random
        a[i]=i;//best
        //a[i]=n-i;//worst
	  }
	heapsort(a,n);
	printf("\nThe Sorted Elements Are:\n");
	for (i=0;i<n;i++)
	  printf("%d\n",a[i]);
	printf("\n");
	printf("count:%d\n",count);
}
void heapsort(int a[],int n) 
{count++;
	int i,t;
	heapify(a,n);
	for (i=n-1;i>0;i--) 
	{count++;
		t = a[0];count++;
		a[0] = a[i];count++;
		a[i] = t;count++;
		adjust(a,i);count++;
	}
}
void heapify(int a[],int n)
 {count++;
	int k,i,j,item;
	for (k=1;k<n;k++) 
	{count++;
		item = a[k];count++;
		i = k;count++;
		j = (i-1)/2;count++;
		while((i>0)&&(item>a[j]))
		 {count++;
			a[i] = a[j];count++;
			i = j;count++;
			j = (i-1)/2;count++;
		}
		a[i] = item;count++;
	}
}
void adjust(int a[],int n)
 {count++;
	int i,j,item;
	j = 0;count++;
	item = a[j];count++;
	i = 2*j+1;count++;
	while(i<=n-1) 
	{count++;
		if(i+1 <= n-1)
		   if(a[i] <a[i+1])
		    i++;count++;
		if(item<a[i]) 
		{count++;
			a[j] = a[i];count++;
			j = i;count++;
			i = 2*j+1;count++;
		} else
		   break;
	}
	a[j] = item;count++;
}
