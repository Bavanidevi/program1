#include <stdio.h>
int hcf(int, int);
int main()
{
int x, y, result1;
printf("Enter the two numbers to find their HCF: ");
 scanf("%d%d", &x, &y);
result = hcf(x, y);
 printf("The HCF of %d and %d is %d.\n", x, y, result1);
 return 0;
 }
int hcf(int x, int y)
{
 while (x != y)
 {
 if (x > y)
  {
   x = x - y;
   }
else
{
  y = y - x;
}
 }
 return x;
}
