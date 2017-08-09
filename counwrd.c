#include <stdio.h>
#include <string.h>
void main()
{
  char s1[200];
  int cnt = 0, i;
  printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (i = 0;s1[i] != '\0';i++)
    {
        if (s[i] == ' ')
            cnt++;    
    }
    printf("number of words in given string are: %d\n", cnt + 1);
}
