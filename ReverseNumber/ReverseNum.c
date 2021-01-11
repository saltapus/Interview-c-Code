#include <stdio.h>

int main()
{
    int n, i, digit, rev =0;
    printf("Enter A number:");
    scanf("%d ", &n);
    printf("\noriginal number is %d", n);

    i = n;
    while(i != 0)
    {
        digit = i %10;
        rev = rev * 10 + digit;
        i /=10;
    }

    printf("\nReversed number is: %d", rev);

    return 0;

}