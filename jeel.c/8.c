#include<stdio.h>

int main()
{
   int p=30,q=50,r;
   printf("value of p before swap is %d\n",p);
   printf("value of q before swap is %d\n",q);
   r=p;
   p=q;
   q=r;
   printf("value of p after swap is %d\n",p);
   printf("value of q after swap is %d\n",q);
    return 0 ;
}
