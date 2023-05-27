#include <stdio.h>
#include <conio.h>
void main(){
int a[3][3],transpose[3][3],i,j;
clrscr();
printf("Enter the value of the matrix\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
	printf("matrix[%d][%d]\t",i+1,j+1);
	scanf("%d",&a[i][j]);
    }
}
printf("Entered matrix\n");
for ( i = 0; i < 3; i++)
{
    for (  j = 0; j < 3; j++)
    {
	printf("%d\t",a[i][j]);
    }
    printf("\n");
}
for ( i = 0; i < 3; i++)
{
    for (  j = 0; j < 3; j++)
    {
       transpose[j][i]=a[i][j];
    }
}
printf("Transpose of the matrix\n");
for ( i = 0; i < 3; i++)
{
    for (  j = 0; j < 3; j++)
    {
	printf("%d\t",transpose[i][j]);
    }
    printf("\n");
}
getch();
}