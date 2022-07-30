#include <stdio.h>
void Power_of_number(int n, int p)
{
    static int power = 1;
    if (p > 0)
    {
        power = power * n;
        Power_of_number(n, p - 1);
    }
    else
        printf("\nPower of a number is %d", power);
}
int main()
{
    int n, p;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Enter power:");
    scanf("%d", &p);
    Power_of_number(n, p);
    return 0;
}