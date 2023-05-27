#include <stdio.h>
#include <stdlib.h>
void main(){
int n,*p;
printf("Enter the number you want \n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
printf("Enter the numbers\n");
for (int i = 0; i < n; i++)
{
    scanf("%d",(p+i));
}
printf("Entered number are:\n");
for (int i = 0; i < n; i++)
{
    printf("%d\n",*(p+i));
}

}