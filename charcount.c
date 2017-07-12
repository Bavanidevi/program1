#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int countchar=0;
char str[50];
printf("Enter the string\n");
gets(str);
for(i=0;i<str[i]!=NULL;i++)
{
countchar++;
}
printf("The number of characters are %d",countchar);
getch();
}
