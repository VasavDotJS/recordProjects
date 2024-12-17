#include <stdio.h>
struct employee{
    char emp_name[40],des[10];
    int emp_code,basic,hra,da,pf,gross,esa,tax;   
};
int main()
{
    struct employee emp1;
    printf("Enter the Employee Name: ");
    gets(emp1.emp_name);
    printf("Enter the Employee Code: ");
    scanf("%d",&emp1.emp_code);
    printf("Enter the Employee Designation: ");
    scanf("%s",emp1.des);
    printf("Enter the Basic Pay: ");
    scanf("%d",&emp1.basic);
    if(emp1.basic<20000)
    {
        emp1.hra=emp1.basic*0.50;
        emp1.da=emp1.basic*0.40;
        emp1.pf=emp1.basic*0.12;
        emp1.esa=emp1.basic*0.02;
        emp1.gross=(emp1.basic+emp1.hra+emp1.da+emp1.esa)-emp1.pf;
    } 
    else
    {
        emp1.da=emp1.basic*0.50;
        emp1.hra=750;
        emp1.esa=emp1.basic*0.02;
        emp1.pf=emp1.basic*0.12;
        emp1.tax=emp1.basic*0.01;
        emp1.gross=(emp1.basic+emp1.da+emp1.hra+emp1.esa)-(emp1.pf+emp1.tax);
    }
    printf("\t\t\t\t SALARY SLIP\n");
    printf("\t\t\t\t-------------\n\n");
    printf("\t Name: %s",emp1.emp_name);
    printf("\t\t\t Designation: %s\n",emp1.des);
    printf("\t Emp Code: %d\n",emp1.emp_code);
    printf("\t Basic Pay: %d\n",emp1.basic);
    printf("\n ------------------------------------------------------------------------------- \n");
    printf("\t SALARY DETAILS\n");
    printf("\t----------------\n\n");
    printf("\t Basic Pay                   : %d\n",emp1.basic);
    printf("\t Dearness Allowances         : %d\n",emp1.da);
    printf("\t House Rent Allownance       : %d\n",emp1.hra);
    printf("\t Provident Fund              : %d\n",emp1.pf);
    printf("\t Employment Support Allowance: %d\n",emp1.esa);
    printf(" --------------------------------------------------------------------------------\n");
    printf("\t Gross Pay                   :%d",emp1.gross);
    return 0;
}
