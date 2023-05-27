#include <stdio.h>
#include <conio.h>
void main(){
int n,a=0,b=1,c=0,i;
clrscr();
printf("Enter the no. of term\n");
scanf("%d",&n);
for (  i = 0; i <n; i++)
{
    printf("%d ",a);
    c=b+a;
    a=b;
    b=c;
}

getch();
}