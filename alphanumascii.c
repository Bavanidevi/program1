#include  <stdio.h>
#include<conio.h>
void main()
{
clrscr();
int countchar=0,numcount=0,i,numalpha=0;
char str[50];
printf("Enter the string\n");
gets(str);
for(i=0;i<str[i]!=NULL;i++)
{
countchar++;
if(str[i]>=0&&str[i]<=9)
{
   numcount++; 
}
if(str[i]>='a'&&str[i]<='z')
{
     numalpha++;
}
printf("The number of characters are %d",countchar);
printf("The number of numbers are %d",numcount);
printf("The number of alphanumeric are %d",numalpha);
}
getch();
}
