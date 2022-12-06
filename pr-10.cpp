#include<stdio.h>
#include<stdlib.h>
struct item
{
 	int value,weight;
};
struct item *it;
int *a,b,c,i,j,n,*d,r,t,y,count=0,val=0;
void dynamicknap()
{
 	printf("\nEnter size of Knapsack:");
 	scanf("%d",&b);
 	printf("\nInsert number of item you have:");
 	scanf("%d",&n);
 	d=(int*)malloc(n * sizeof(int*));
 	it = (int*)malloc(n * sizeof(int*));
 	a=(int*)malloc((n+1 * b+1) * sizeof(int*));
 	for(i=0;i<n;i++)
 	{
 		printf("Enter the Weight of Item %d:",i+1);
 		scanf("%d",&it[i].weight);
 		printf("Enter the value of Item %d:",i+1);
 		scanf("%d",&it[i].value);
 	}
 	for(i=1;i<=n;i++)
 	{
 		a[i][0]=0;
 	for(j=1;j<b+1;j++)
 	{
 		a[0][j]=0;
 		if(j<it[i-1].weight)
 		{
 			a[i][j]=a[i-1][j];
 		}
 		else if(j>=it[i-1].weight)
 		{
 			r=i-1;
 			int temp=a[r][j];
 			a[i][j]=it[r].value+a[r][j-it[r].weight];
 			if(temp>a[i][j])
 			{
 				a[i][j]=temp;
 			}
		}
 	}
 	}
 	printf("Table:\n");
 	for(i=0;i<=n;i++)
 	{
 		for(j=0;j<b+1;j++)
 		{
 			printf("%d\t",a[i][j]);
 		}
 		printf("\n");
 	}
 	r=n;
 	t=b;
 	while(b>0)
 	{
 		if(a[r][t]==a[r-1][t])
		{	
			r--;
		}
		if(a[r][t]>a[r-1][t])
		{
			printf("\n%d is Used",it[r-1].weight);
			b-=it[r-1].weight;
			t-=it[r-1].weight;
			val+=it[r-1].value;
		 	r--;
		}
	}
 	printf("\nValue/Profit: %d",val);
	}
void main()
{
 	dynamicknap();
}
