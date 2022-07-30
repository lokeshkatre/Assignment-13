#include <stdio.h>
void hcf(int n, int m, int r, int p)
{
    if (r <= n)
    {
        if (n % r == 0 && m % r == 0)
            p = r;
        hcf(n, m, r + 1, p);
    }
    else
        printf("\nHCF of %d and %d is %d", m, n, p);
}
int main()
{
    int n, m;
    printf("Enter numbers :");
    scanf("%d%d", &n, &m);
    int min, max;
    min = (n > m) ? m : n;
    max = (n <= m) ? m : n;
    hcf(min, max, 1, 1);
    return 0;
}