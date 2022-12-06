#include<stdio.h>
#include<stdlib.h>
struct item
{
 double weight,value,density;
};
int a,b,i,j,n,w,c=0;
double v;
struct item *item;
struct item temp;

void main()
n{
printf("\nInsert Knapsack Size:");
scanf("%d",&w);
 printf("\nInsert number of Item:");
 scanf("%d",&n);
item=(struct item*)malloc(n * sizeof(struct item*));
 for(i=0;i<n;i++)
 {
 printf("\nEnter the weight of %d item:",i+1);
 scanf("%lf",&item[i].weight);
 printf("\nEnter the value of %d item:",i+1);
 scanf("%lf",&item[i].value);
 item[i].density=item[i].value/item[i].weight;
 }
 for(i=0;i<n;i++)
 {
 for(j=i;j<n;j++)
 {
 if(item[i].density<item[j].density)
 {
 temp=item[j];
 item[j]=item[i];
 item[i]=temp;
}
}
 }
 while(w>0)
 {
if(item[c].weight<w)
{
 w-=item[c].weight;
v+=item[c].value;
 c++;
}
else
{
w--;
v+=item[c].density;
}
}
printf("\nValue is: %lf",v);
}
