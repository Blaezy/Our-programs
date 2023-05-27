#include <stdio.h>
#include <conio.h>
struct Employee
{
    int empID;
    char empname[10];
    int empage;
    char empaddress[52];
    char empdepartment[32];
};

void main(){
    int a,i;
struct Employee e[10];
clrscr();
printf("Enter employee detail\n");
for ( i = 0; i < 10; i++)
{
    printf("(%d) Employee ID\t",i+1);
    scanf("%d",&e[i].empID);
    printf("\n(%d) Employee Name\t",i+1);
    scanf("%s",e[i].empname);
    printf("\n(%d) Employee Age\t",i+1);
    scanf("%d",&e[i].empage);
    printf("\n(%d) Employee Address\t",i+1);
    scanf("%s",e[i].empaddress);
    printf("\n(%d) Employee Department\t",i+1);
    scanf("%s",e[i].empdepartment);
}
printf("\nEnter the ID of Employee to get detail\t");
scanf("%d",&a);
printf("\n");
switch (a)
{
case 1:
printf("Employee ID %d\n",e[0].empID);
printf("Employee Name %s\n",e[0].empname);
printf("Employee Age %d\n",e[0].empage);
printf("Employee ID %s\n",e[0].empaddress);
printf("Employee ID %s\n",e[0].empdepartment);
    break;
case 2:
printf("Employee ID %d\n",e[1]ID);
printf("Employee Name %s\n",e[1].empname);
printf("Employee Age %d\n",e[1].empage);
printf("Employee ID %s\n",e[1].empaddress);
printf("Employee ID %s\n",e[1].empdepartment);
    break;
case 3:
printf("Employee ID %d\n",e[2].empID);
printf("Employee Name %s\n",e[2].empname);
printf("Employee Age %d\n",e[2].empage);
printf("Employee ID %s\n",e[2].empaddress);
printf("Employee ID %s\n",e[2].empdepartment);
    break;
case 4:
printf("Employee ID %d\n",e[3].empID);
printf("Employee Name %s\n",e[3].empname);
printf("Employee Age %d\n",e[3].empage);
printf("Employee ID %s\n",e[3].empaddress);
printf("Employee ID %s\n",e[3].empdepartment);
    break;
case 5:
printf("Employee ID %d\n",e[4].empID);
printf("Employee Name %s\n",e[4].empname);
printf("Employee Age %d\n",e[4].empage);
printf("Employee ID %s\n",e[4].empaddress);
printf("Employee ID %s\n",e[4].empdepartment);
    break;
case 6:
printf("Employee ID %d\n",e[5].empID);
printf("Employee Name %s\n",e[5].empname);
printf("Employee Age %d\n",e[5].empage);
printf("Employee ID %s\n",e[5].empaddress);
printf("Employee ID %s\n",e[5].empdepartment);
    break;
case 7:
printf("Employee ID %d\n",e[6].empID);
printf("Employee Name %s\n",e[6].empname);
printf("Employee Age %d\n",e[6].empage);
printf("Employee ID %s\n",e[6].empaddress);
printf("Employee ID %s\n",e[6].empdepartment);
    break;
case 8:
printf("Employee ID %d\n",e[7].empID);
printf("Employee Name %s\n",e[7].empname);
printf("Employee Age %d\n",e[7].empage);
printf("Employee ID %s\n",e[7].empaddress);
printf("Employee ID %s\n",e[7].empdepartment);
    break;
case 9:
printf("Employee ID %d\n",e[8].empID);
printf("Employee Name %s\n",e[8].empname);
printf("Employee Age %d\n",e[8].empage);
printf("Employee ID %s\n",e[8].empaddress);
printf("Employee ID %s\n",e[8].empdepartment);
    break;
case 10:
printf("Employee ID %d\n",e[9].empID);
printf("Employee Name %s\n",e[9].empname);
printf("Employee Age %d\n",e[9].empage);
printf("Employee ID %s\n",e[9].empaddress);
printf("Employee ID %s\n",e[9].empdepartment);
    break;

default:
printf("Please enter valid information");
    break;
}
getch();
}
