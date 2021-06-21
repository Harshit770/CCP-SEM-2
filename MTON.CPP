#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n,p;
    clrscr();
    printf("Print all even numbers from ");
    scanf("%d", &n);
    printf(" to ");
    scanf("%d",&p);
    printf("Even numbers are");
    for(i=n; i<=p; i++)
    {
	if(i%2 == 0)
	{
	    printf("  %d  ", i);
	}
    }
    getch();
    return 0;
}