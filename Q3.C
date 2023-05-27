#include <stdio.h>
// #include <conio.h>
void main(){
int a=2,n,prime=1;
// clrscr();
printf("Please enter the value\n");
scanf("%d",&n);
if (n==0 || n==1)
{
    prime=0;
}
do
{
    if (n%a==0)
    {
	prime=0;
	break;
    }
	a++;
}while(a<n);
if (prime==0)
{
    printf("%d is not a prime number",n);
}
else
{
    printf("%d is a prime number",n);
}
getch();
}