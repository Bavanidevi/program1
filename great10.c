#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],great;
printf("Enter the 10 numbers");
for(i=0;i<10;i++)
{
scanf("%d",a[i]);
}
great=a[0];
for(i=0;i<10;i++)
{
if(a[i]>great)
{
great=a[i];
}
}
printf("Greatest among ten numbers is %d",great);
getch();
}
