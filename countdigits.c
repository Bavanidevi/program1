#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int n,r,ri,count;
printf("Enter the Number");
scanf("%d",&n);
while(n!=0)
{
n%10;
//ri=ri*10+r;
n/=10;
++count;
}
printf("The number of digits in an integer is",count);
getch();
}
