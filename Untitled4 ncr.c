// ncr

#include <stdio.h>
int factorial (int num)
{
    int fact = 1;
    for ( int i = 1; i<=num; i++)
    {
        fact *= fact*i;
    }
    return fact;
}

int ncr(int n , int r)
{
    int factn=factorial(n);
    int factr=factroial(r);
    int factc=factorial(n-r);

    int result = factn/(factr*factc);
    return result;
}

int main()
{
    int n,r;
    printf("Enter the value of n and r\n");
    scanf("%d%d", &n,&r);

    int result = ncr(n,r);
    printf("ncr = %d\n", result);

    return 0;
}
