#include <stdio.h>
#include <conio.h>
int factorial(int n){
    if (n==1||n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
    
}
int main(){
    int a;
    long int b;
    // clrscr();
    printf("Enter the value\n");
    scanf("%ld",&a);
    b=factorial(a);
    printf("The factorial of %d is %ld",a,b);
getch();
return 0;
}