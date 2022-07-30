#include <stdio.h>
void Sum_Of_Digit(int n, int sum)
{
    if (n > 0)
    {
        sum = sum + n%10;
        Sum_Of_Digit(n/10, sum);
    }
    else
        printf("\nSum of digits of number is %d", sum);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    Sum_Of_Digit(n, 0);
    return 0;
}