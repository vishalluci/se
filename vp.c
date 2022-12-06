#include<stdio.h>
int count=0;
int fact(int n);
int main() {
    int n;
    printf("Enter a positive integer: ");count++;
    scanf("%d",&n);count++;
    printf("Factorial of %d = %d \n", n, fact(n));count++;
    printf("The value of count is: %d",count);
    return 0;
}

int fact(int n) {
    if (n>=1)
    {
	count++;
        return n*fact(n-1);
    }
    else
    count++;
        return 1;
}
