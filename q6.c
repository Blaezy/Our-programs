#include <stdio.h>
#include <conio.h>
void main(){
int num1,num2,choice;
// clrscr();
printf("Input your option\n");
printf("1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Exit\n");
scanf("%d",&choice);
printf("\nEnter the first value\n");
scanf("%d",&num1);
printf("\nEnter the second value\n");
scanf("%d",&num2);
switch (choice)
{
case 1:
printf("The Addition of %d and %d is %d",num1,num2,num1+num2);
    break;
case 2:
printf("The Subtraction of %d and %d is %d",num1,num2,num1-num2);
    break;
case 3:
printf("The Division of %d and %d is %d",num1,num2,num1/num2);
    break;
case 4:
printf("The Multiplication of %d and %d is %d",num1,num2,num1*num2);
    break;
case 5:
    break;

default:
printf("\nPlease enter valid information\n");
    break;
}
getch();
}