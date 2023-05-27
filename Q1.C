#include <stdio.h>
#include <conio.h>
void main(){
int a,b,c;
clrscr();
printf("Enter first value \n");
scanf("%d",&a);
printf("\nEnter second value \n");
scanf("%d",&b);
printf("\nEnter third value \n");
scanf("%d",&c);
if (a>b && a>c)
{
    printf("\n%d is the greatest number",a);
}
else if (b>a && b>c)
{
    printf("%d is the greatest number",b);
}
else if (c>a && c>b)
{
    printf("%d is the greatest number",c);
}

else
{
    printf("All values are equal");
}
getch();
}