#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,oi,r,ri;
printf("Enter the limit");
scanf("%d %d",&n1,&n2);
for(oi=n1;oi<=n2;oi++)
{
while(oi!=0)
{
r=n%10;
ri=ri*10+r*r*r;
oi/=10;
}
if(oi==ri)
{
printf("The number %d is Armstrong",oi);
}
}
getch();
}
