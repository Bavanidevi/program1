#include<stdio.h>
void main(void)
{
  char string1[25],string2[25];
  int i=0,j=0;
  printf("\nEnter First String:");
  gets(string1);
  printf("\nEnter Second String:");
  gets(string2);
  while(string1[i]!='\0')
  i++;
  while(string2[j]!='\0')
  {
    string1[i]=string2[j];
    j++;
    i++;
  }
  string1[i]='\0';
  printf("\nConcatenated String is %s",string1);
}
