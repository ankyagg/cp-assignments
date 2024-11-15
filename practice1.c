#include<stdio.h>

void main(){
    int a=25,b=20,c=5,d=10;
    // arithmetic operations
    printf("On adding a+b=%d\n", a+b);
    printf("On subtracting a-b=%d\n", a-b);
    printf("On dividing a/b=%d\n", a/b);
    printf("On taking modulus a%b= %d\n", a%b);

    //logical operator
    printf(" AND :%d\n",(a>b)&&(c<d));
    printf(" OR : %d\n",(a>b)||(c<d));
    printf(" NOT :%d\n", !(a>b));

    //bitwise operator
    printf(" a BITWISE AND b : %d\n", a&b);
    printf(" a BITWISE OR b : %d\n", a|b);
    printf(" a BITWISE XOR b : %d\n", a^b);
    }
