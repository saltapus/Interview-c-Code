#include "ArmStrong.h"

int main()
{
    int digits, sum = 0, n, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Then number you have entered is: %d\n", n);
    temp = n;
    
    while(n > 0)
    {
        digits = n % 10;
        sum = sum + (digits * digits * digits);
        n = n/10;
    }

    if(sum == temp)
    {
        printf("%d is an armstrong number", sum);
    }
    else
    {
        printf("Not an armstrong");
    }
    

    return 0;
}