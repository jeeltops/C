#include<stdio.h>

struct  employee
{
 char   FirstName[20];
 char   LastName[20];
 char   Email;
 int    PhoneNo;
 float  Salary;
};
int main()
{
    struct employee emp;
    printf("\nEnter details:\n");
    printf("FirstName    ?:");
    gets(emp.FirstName);
    printf("LastName     ?:");
    scanf("%d",&emp.LastName);
    printf("Email         ?:");
    scanf("%d",&emp.Email);
    printf("PhoneNo     ?:");
    scanf("%f",&emp.PhoneNo);
    printf("Salary      ?:");
    scanf("%f",&emp.Salary);

    printf("\nEntered datail is:");
    printf("FirstName%s"    ,emp.FirstName);
    printf("LastName%s"     ,emp.LastName);
    printf("Email%s"        ,emp.Email);
    printf("PhoneNo%s"      ,emp.PhoneNo);
    printf("Salary %f\n"    ,emp.Salary);
    return 0;
}