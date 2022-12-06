#include<stdio.h>
#include<conio.h>
int main()
{
	int v=0,fact=1,a,i;
	printf("Enter the number:");   v++;
	scanf("%d",&a);                v++;
	for(i=1;i<=a;i++)
	{                              v++;
		fact=fact*i;               v++;
	}                              v++;
	printf("Fact is: %d",fact);    v++;
	printf("/nCount is: %d",v);
	return 0;
}
