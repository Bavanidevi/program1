#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,a[10],high;
printf("Enter the array limit\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
high=a[0],low=a[0];
for(i=0;i<n;i++)
{
if(a[i]>high)
{
high=a[i];
}
if(a[i]<low)
{
low=a[i];
}
}
printf("Highest number in array  is %d",high);
printf("Lowest number in array is %d",low);
getch();
}
