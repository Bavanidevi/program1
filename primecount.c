#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,n1,i,p,count=0;
printf("Enter the limit");
scanf("%d%d",&n,&n1);
while(n<=n1)
{
for(i=2;i<=n/2;i++)
{
p=n%i;
if(p!=0)
{
count++;
}
printf("The prime number count are %d",count);
}
getch();
}
