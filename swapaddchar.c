#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int i,j;
char str[20],temp;
printf("Enter the string\n");
scanf("The original string %s",str
scanf("%s"str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[i+2];
str[i+2]=temp;
}
printf("After swap");
getch();
}

