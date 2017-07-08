#include<stdio.h>
#include<conio.h>
int main()
{
    clrscr();
    int b, e;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &b);
    printf("Enter an exponent: ");
    scanf("%d", &e);
    while (e!= 0)
    {
        result *= b;
        --e;
    }
    printf("Answer = %lld", result);
    return 0;
    getch();
}
