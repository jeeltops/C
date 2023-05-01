#include<stdio.h>
#include<string.h>

struct  Data 
{
    int i;
    long int f;
}data, data1;

int main()
{
    data.i = 28;
    printf("the value of i : %d\n",(data.i));
    printf("Memory size occupied by data : %d\t%d",sizeof(data),sizeof(data));
    return 0;
}