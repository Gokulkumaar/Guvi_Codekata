#include <stdio.h>
int main()
{
    int b, e;

    long long result = 1;

    printf("Enter a b number: ");
    scanf("%d", &b);

    printf("Enter an e: ");
    scanf("%d", &e);

    while (e!= 0)
    {
        result *= b;
        --e;
    }

    printf("Answer = %lld", result);

    return 0;
}
