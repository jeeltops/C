#include<stdio.h>
int main()
{
    int optn,a,b;
float c;
printf("\n1.Add: ");
printf("\n2.Subtract: ");
printf("\n3.Multiply: ");
printf("\n4.Divide: ");
printf("\n5.Exit: ");
printf("\nWhat u want to do?: ");
scanf("%d",&optn);
switch(optn)
do
{
case 1: printf("\nEnter Numbers to Add: ");
  scanf("%d %d",&a,&b);
  c=a+b;
  printf("Addition's Result Is= %f",c);
  break;

case 2: printf("\nEnter Numbers to Subtract: ");
     scanf("%d %d",&a,&b);
  c=a-b;
  printf("Subtraction's Result Is= %f",c);
     break;

case 3: printf("\nEnter Numbers to Multiply: ");
     scanf("%d %d",&a,&b);
  c=a*b;
  printf("Multiplication's Result Is= %f",c);
  break;

case 4: printf("\nEnter Numbers to Divide: ");
     scanf("%d %d",&a,&b);
  c=a/b;
  printf("Dividion's Result Is= %f",c);
  break;

case 5: exit(0);
default :printf("\n Invalid option...");

}while(optn!=0);
return 0;
}
   