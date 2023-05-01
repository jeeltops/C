#include<stdio.h>
int main()
{
    int n,x,y, num = 1;
    printf("\n Entre the rows the Floyd's Triagle:");
    scanf("%d",&n);
    for (x=1;x<=n;x++)
    {
        for (y=1;y<=x;y++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}