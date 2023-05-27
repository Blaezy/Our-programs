#include <stdio.h>
#include <conio.h>
void main(){
int i,j,n;
// clrscr();
printf("Please enter number of rows \n");
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
      for ( j = 0; j < i; j++)
      {
        printf("*");
      }
      printf("\n");
}
getch();
}