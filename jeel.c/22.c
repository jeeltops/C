#include<stdio.h>
int main()
{
int a[7],i,j,temp;
printf("enter array elemant :");
for(i=0;i<7;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=7;i++)
{
    for(j=0;j<=7;j++)
    {
        if(a[i]<a[j])
       if(a[i]>a[j])
        {
         temp=a[i];
         a[i]=a[j];
         a[j]=temp;
        }
    }
}
printf("array elements : ");
for(i=0;i<7;i++)
{
    printf("%d",a[i]);
}
    return 0;
}

