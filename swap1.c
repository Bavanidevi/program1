#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,temp;
printf("Enter the number for a");
scanf("%d",&a);
printf("Enter the number for b");
scanf("%d",&b);
printf("The numbers before swap\n);
printf("a=%d b=%d",a,b);
getch();
if(a!=b)
{
a=b;
b=temp;
temp=b;
}
printf("The numbers after swap\n);
printf("a=%d b=%d",a,b);
getch();
}
