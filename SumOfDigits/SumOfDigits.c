#include "SumOfDigits.h"

int main()
{
    int n, m, sum =0 , temp;

    printf("Enter number:");
    scanf("%d", &n);
    temp = n;
    while(n > 0)
    {
        m = n%10;
        sum += m;
        n = n/10;
    }

    printf("the sum of digits of %d are : %d", temp, sum);

    return 0;
}