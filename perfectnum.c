#include <stdio.h>
 int main()
{
    int numb, rem1, sum = 0, i;
    printf("Enter a Number\n");
    scanf("%d", &num);
    for (i = 1; i <= (num - 1); i++)
    {
        rem = num % i;
	if (rem1 == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf("Entered Number is perfect number");
    else
        printf("Entered Number is not a perfect number");
    return 0;
}
