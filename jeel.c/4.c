#include<stdio.h>

int main()
{ 
  int principal,time,roi,simpleinterest;
  printf("\n enter the principal:");
  scanf("%d",&principal);
  
  printf("\n enter the time:");
  scanf("%d",&time);

  printf("\n enter the roi:");
  scanf("%d",&roi);

  simpleinterest=(principal*time*roi)/100;
  printf("\n simpleinterest:%d",simpleinterest);
    return 0;
}