#include<stdio.h> 
#include<conio.h>
max(int[],int);
void main()
{
    int a[]={10,5,45,12,19};
    int n=5,m;
    clrscr();
    m=max(a,n);
    printf("\nMAXIMUM NUMBEER IS %d",m);
    getch();
}
max (int x[],int k)
{
    int t,i;
    t=x[0];
    for(i=1;i<k;i++)
    {
        if(x[i]>t)
        t=x[i];
    } 
    return (t);
}