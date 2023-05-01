#include<stdio.h>

int main()
{
    int i,number,sum = 0;

    printf("\nplease Enter the value:");
    scanf("%d",&number);

    for(i=1;i<=number;i=i+2)
    {
        sum = sum +i;
        printf("%d",i);
    }
    printf("\n the sum of %d=%d,number,sum");

    return 0;
}