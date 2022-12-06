#include <stdio.h>

int main()
{
    int i, j, c = 0, n, x, key;
    printf("enter size of array"); c++;
    scanf("%d",&n);
    c++;
    int a[n];
    printf("Enter 1 for best,2 for worst,3 for average:\n");
    c++;
    scanf("%d",&x);
    c++;

    switch (x)
    {
    case 1:
        c++;
        for (i = 0; i < n; i++)
        {
            c++;
            a[i] = i;
            c++;
        }
        break;
    case 2:
        c++;
        for (i = 0; i < n; i++)
        {
            c++;
            a[i] = n - i;
            c++;
        }
        break;
    case 3:
        c++;
        for (i = 0; i < n; i++)
        {
            c++;
            a[i] = rand() % n + 1;
            c++;
        }
        break;
    default:
        printf("enter valid choice");
        c++;
    }

	for (i = 0; i < n; i++)
	{c++;
		key = a[i];c++;
		j = i - 1;c++;

		while (j >= 0 && a[j] > key)
		{c++;
			a[j + 1] = a[j];c++;
			j = j - 1;c++;
		}
		a[j + 1] = key;c++;
	}
	for(i=0;i<n;i++)
	{
	 printf("%d\n", a[i]);c++;	
	}
	printf("count :%d", c);
	
	
}
