#include <stdio.h>
void No_Of_Digits(int n)
{
    static int count = 0;
    if (n > 0)
    {
        count++;
        No_Of_Digits(n / 10);
    }
    else
        printf("\nNumber of digits are %d", count);
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    No_Of_Digits(n);
    return 0;
}