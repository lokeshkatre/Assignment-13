#include <stdio.h>
void Fibonacci(int n)
{
    static int fib = 1, first = 0, second = 1;
    if (n > 0)
    {
        printf("%d ", fib);
        fib = first + second;
        first = second;
        second = fib;
        Fibonacci(n - 1);
    }
}
int main()
{
    int n;
    printf("Enter number of terms in fibonacci series:");
    scanf("%d", &n);
    Fibonacci(n);
    return 0;
}