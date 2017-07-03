#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,i=1,sum=0,od=15,sum1=0;
while(i<=15)
{
sum=sum+i;
i++;
}
printf("The sum is %d",sum);
int od=15;
while(od<=45)
{
if(od%2==1)
{
sum1=sum1+od;
}
od++;
}
printf("The sum of odd between 15 t0 45is %d",sum);
getch();
}
