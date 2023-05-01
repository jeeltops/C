#include<stdio.h>

    struct employee
    {
    char   name[30];
    int    empId;
    float  salary;
    char   address[30];
};
int main()
{
    struct employee emp;
    printf("\nEnter details :\n");
    printf("Name  ?:");
    gets(emp.name);
    printf("ID    ?:");
    scanf("%d",&emp.empId);
    printf("Salary ?:");
    scanf("%f",&emp.salary);
    printf("address  ?:");
    scanf("%d",&emp.address);

    printf("\nEntered detail is:");
    printf("Name:%s"   ,emp.name);
    printf("Id:%d"     ,emp.empId);
    printf("salary: %f\n",emp.salary);
    printf("address:%s",emp.address);
    return 0;
}