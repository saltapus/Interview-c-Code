#include <stdio.h>
/*Without recursion*/
int main()
{
    int n1, n2, n3, i, number;
    n1 = 0;
    n2 = 1;

    printf("Enter number");
    scanf("%d ", &number); /*ASSIGNS integer to memory address of variable number*/

    printf("\n%d %d ", n1, n2);/*prints first 2 integeres as it starts form 1 onwards*/

    for(i = 2; i < number; ++i)
    {
        n3 = n1 + n2;
        printf("%d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}