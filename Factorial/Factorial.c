#include <stdio.h>

int main()
{
    int i, factorial = 1, n;
    printf("Enter a number:");
    scanf("%d ", &n);
    /* because anything times by 0 is 0 so factorial should start at 1*/
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("\nThe Factorial is %d", factorial);
    return 0;
}