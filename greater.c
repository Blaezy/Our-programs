#include <stdio.h>
int main ()
{
    int num[5];
    printf("Enter the all number\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i=0;i<5;i++)
    {
        printf("%d",num[i]);
    }
    printf("the greater value is %d",val);
    return 0;
}