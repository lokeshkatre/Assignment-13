#include <stdio.h>
void Sum_Of_Even(int n, int sum)
{
   if(n>0)
   {
    sum=sum+n;
     Sum_Of_Even(n-2,sum);
   }
   else 
   printf("\nSum of even numbers is %d ",sum);
}
int main()
{
    int n;
    printf("Enter no. of first odd numbers :");
    scanf("%d", &n);
    Sum_Of_Even(2 * n, 0);
    return 0;
}