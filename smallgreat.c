#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],great;
printf("Enter the array limit\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
great=a[0],small=a[0];
for(i=0;i<n;i++)
{
if(a[i]>great)
{
great=a[i];
}
if(a[i]<small)
{
small=a[i];
}
}
printf("Greatest number in array  is %d",great);
printf("Smallest number in array is %d",small);

getch();
}
