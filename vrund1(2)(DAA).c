#include<stdio.h>
#include<conio.h>
int count=0;
int fact(int a)
{count++;
  if(a=0)
  {count++;
  return 1;count++;
  }
  else
  {count++;
    return(a*fact(a-1));count++;
  }	
}
int main()
{
	int a,ans;
	printf("Enter the number:"); count++; 
	scanf("%d",&a);count++;               
    ans=fact(a);count++;
	printf("Fact is: %d",ans);count++;
	printf("\n Count is %d",count)   
	return 0;
}

