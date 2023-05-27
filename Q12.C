#include <stdio.h>
#include <conio.h>
int main(){
int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
// clrscr();
printf("Enter the value for 1st matrix\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf("matrix[%d][%d]\t",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
}
printf("\nEnter the value for 2nd matrix\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
	printf("matrix[%d][%d]\t",i+1,j+1);
	scanf("%d",&b[i][j]);
    }
}

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
       c[i][j]=a[i][j]+b[i][j];
    }
}
for (i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
       d[i][j]=a[i][j]*b[i][j];
    }
}

printf("The addition of two matrix are\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
	printf("%d\t",c[i][j]);
    }
    printf("\n");
}
printf("The multiplication of two matrix are\n");
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
	printf("%d\t",d[i][j]);
    }
    printf("\n");
}
return 0;
}