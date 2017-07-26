#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n;
printf("Enter the number between 1 to 9\n");
scanf("%d",&n);
if(n>0 && n<=9)
{
printf("The number is %d",n);
}
else
{
printf("You entered number is not in a range\n");
}
getch();
}
