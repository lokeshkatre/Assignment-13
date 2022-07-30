#include <stdio.h>
void SumOfNatural(int n, int sum)
{
    if (n > 0)
    {
        sum = sum + n;
        SumOfNatural(n - 1, sum);
    }
    else
        printf("\nSum of natural number is %d", sum);
}
int main()
{
    int n;
    printf("Enter no. of first natural number number:");
    scanf("%d", &n);
    SumOfNatural(n, 0);
    return 0;
}