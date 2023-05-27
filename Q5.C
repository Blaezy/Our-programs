#include <stdio.h>
#include <conio.h>
void main(){
float m[20],sum=0,avg;
int i;
clrscr();
for ( i = 0; i < 20; i++)
{
    printf("%d.Enter the marks\t",i+1);
    scanf("%f",&m[i]);
    sum+=m[i];
}
avg=sum/20;
printf("%0.2f",avg);
getch();
}