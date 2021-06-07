#include <math.h>
#include <stdio.h>
#include <conio.h>
int main()
    {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    clrscr();
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
	printf("THE ROOTS ARE REAL AND DIFFERENT :  ");
	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b - sqrt(discriminant)) / (2 * a);
	printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriminant == 0) {
	printf("THE ROOTS ARE REAL AND EQUAL :  ");
	root1 = root2 = -b / (2 * a);
	printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
	printf("THE ROOTS ARE NOT REAL :  ");
	realPart = -b / (2 * a);
	imagPart = sqrt(-discriminant) / (2 * a);
	printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    getch();
    return 0;
    }