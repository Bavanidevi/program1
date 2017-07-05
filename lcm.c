#include <stdio.h>
int main()
{
    int n1, n2, multiple;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    multiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( multiple%n1==0 && multiple%n2==0 )
        {
            printf("The LCM of %d and %d is %d.", n1, n2,multiple);
            break;
        }
        ++multiple;
    }
    return 0;
}
