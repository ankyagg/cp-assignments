#include<stdio.h>
void main()
{
    int c , r , n;  // n is defined no. of rows
    printf("ENter no. of rows :\n ");
    scanf("%d", &n);

    // initializing upper diamond pattern
    for (r=1 ; r<=n; r++){

    // for loop for spacing
    for ( c =1 ; c <= n-r ; c++){
        printf(" ");
    }
    // for printing *
    for  (c=1 ; c <=2*r-1 ; c++){
        printf("*");
    }
    printf("\n");
    }

    for (r=n-1; r>=1; r--){

    // for loop for spacing
    for ( c =1 ; c <= n-r ; c++){
        printf(" ");
    }
    // for printing *
    for  (c=1 ; c <=2*r-1 ; c++){
        printf("*");
    }
    printf("\n");
    }
}
