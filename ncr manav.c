#include <stdio.h>

long factorial(int n)
{
    if ( n==0|| n==1)
        return 1;
    if (n<0)
    {
        printf("Invalid input!!");
        return 0;
    }
    long factorial =1;
    for(int i = 1; i<=n; i++)
    {
        factorial*= i;
    }
    return factorial;
}
    long ncr(int n , int r)
    {
        return factorial(n)/(factorial(r)*factorial(n-r));
    }

    int main()
    {
        int r , n;
        printf("Enter value of n,r");
        scanf("%d%d",&n, &r);

        printf("ncr : %d", ncr(n,r));
        return 0;
    }

