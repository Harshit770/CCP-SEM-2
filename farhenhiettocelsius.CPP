#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius, fahrenheit;
    clrscr();
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    getch();
    return 0;
}