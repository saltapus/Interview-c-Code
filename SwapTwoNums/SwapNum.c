#include "SwapNum.h"

int main()
{
    int a, b;
    printf("Enter A number\n");
    scanf("%d", &a);

    printf("Enter A second number\n");
    scanf("%d", &b);

    printf("\noriginal number is a= %d and b=%d", a, b);

    b = a + b;
    a = b - a;
    b = b - a;

    if(printf("\nSwaped positions number is: a = %d and b= %d", a, b))
    {}


    return 0;

}

