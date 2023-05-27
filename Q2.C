#include <stdio.h>
#include <conio.h>
int main(){
float celcius,Fahrenheit;
// clrscr();
printf("Please enter the temperature in Celcius\n");
scanf("%f",&celcius);
Fahrenheit=(celcius*1.8)+32;
printf("The temperature of %0.2f Celcius in Fahrenheit is %0.2f ",celcius,Fahrenheit);
getch();
return 0;
}