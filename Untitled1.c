// Write a Program to demonstrate Arithmetic, logical, and Bitwise operators.
#include<stdio.h>

void main(){
    int a=10 , b=5, c=8, d=9;
    // arithmetic operator
    printf("adding a+b=%d\n",a+b);
    printf("subtracting a-b=%d\n",a-b);
    printf("dividing a/b=%d\n",a/b);
    printf("modulus of two numbers a%b=%d\n", a%b);

    // logical ooperator
    printf("%d\n", (a>b)&&(c<d));
    printf("%d\n", (a>b)||(c<d));
    printf("%d\n", !(a>b));

    // bitwise operator
    printf(" a BITWISE AND b : %d\n", a&b);
    printf(" a BITWISE OR b : %d\n", a|b);
    printf(" a BITWISE XOR b : %d\n", a^b);
     }
