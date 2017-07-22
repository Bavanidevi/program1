#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int table,limit,value;
printf("Enter the multiplication table number\n");
scanf("%d",&table);
printf("Enter the limit\n");
scanf("%d",&limit);
for(i=1;i<=limit;i++)
{
value= i*table
printf("%d * %d = %value",i,table,value);
}
getch();
}
