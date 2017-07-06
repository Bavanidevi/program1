#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int av;
while(av<=255)
{
printf("%d %c",av,av);
av++;
}
printf("Press any key to proceed\n");
getch();
}
