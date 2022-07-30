#include <stdio.h>
void Sum_Of_Odd(int n, int sum)
{
   if(n>0)
   {
    sum=sum+n;
     Sum_Of_Odd(n-2,sum);
   }
   else 
   printf("\nSum of odd numbers is %d ",sum);
}
int main()
{
    int n;
    printf("Enter no. of first odd numbers :");
    scanf("%d", &n);
    Sum_Of_Odd(2 * n - 1, 0);
    return 0;
}