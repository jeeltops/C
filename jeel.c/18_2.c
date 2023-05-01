#include<stdio.h>
int main()
{
    int n;
     printf("Enter the Number\n");
    scanf("%d",&n);
    char ch='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%c",ch++);
        }
        printf("\n");
    }
    return 0;
}