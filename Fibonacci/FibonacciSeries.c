#include "FibonacciSeries.h"
/*Without recursion*/

int main()
{
    int n1, n2, n3, i, number;
    n1 = 0;
    n2 = 1;
    
    printf("==============================================\n");
    printf("Testing Fibonacci without recursion\n");
    printf("==============================================");
    printf("\nEnter number\n");
    scanf("%d ", &number); /*ASSIGNS integer to memory address of variable number*/

    printf("\n%d %d ", n1, n2);/*prints first 2 integeres as it starts form 1 onwards*/

    for(i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;        
        printf("%d ", n3);

    }

    /* Test with recursion*/
    printf("\n==============================================\n");
    printf("Testing Fibonacci with Recursion\n" );
    printf("==============================================");    
    n1 = 0, n2 = 1;
    printf("\n%d %d ", n1, n2);
    fibRec(number);
    return 0;
}

void fibRec(int n)
{
    static int n1 = 0, n2 =1, n3;

    if(n > 2) /*because fib starts from 2n onwards*/
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;        
        printf("%d ", n3);
        fibRec(n - 1);
    }

}