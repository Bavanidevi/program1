#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int *a,c,*b;
printf("Enter the two numbers\n");
scanf("%d %d",a,b);
c=*a+*b;
printf("The sum is %d",c);
getch();
}
