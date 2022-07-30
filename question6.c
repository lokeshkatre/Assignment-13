#include <stdio.h>
void factorial(int n, int fact)
{
    if (n > 0)
    {
        fact = fact * n;
        factorial(n - 1, fact);
    }
    else
        printf("\nfactorial of number is %d", fact);
}

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    factorial(n, 1);
    return 0;
}