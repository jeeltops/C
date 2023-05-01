#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    printf("odd numbers from 1 to %d is :",n);

    for (int i=1;i<=n;i++)
    {
        if (i % 2 == 1)
        {
            printf("%d",i);
        }
    }
    return 0;
}