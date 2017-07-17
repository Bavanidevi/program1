#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[20],i,n,sum,average;
printf("Enter the number of elements\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter the elements\n");
scanf("%d",a[i]);
sum=sum+a[i];
}
average=sum/n;
printf("The average of an array element is %d",average);
getch();
}

