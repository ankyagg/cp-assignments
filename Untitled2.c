// star

#include <stdio.h>
 void main(){
     int n,r,c;
    printf("Enter no. of rows");
    scanf("%d", &n);
    // initializing diamond pattern
    for(r = 1 ;r <= n; r++)
        {
            // 'for' loop for spacing
            for(c = 1;c <= n-r; c++)
            {
                printf(" ");
            }
            //'for' loop for printing *
            for(c = 1; c <= 2*r-1; c++)
            {
                printf("*");
            }
         printf("\n");
        }


            for(r = n-1;r >=1; r--)
        {
            // 'for' loop for spacing
            for(c = 1;c <= n-r; c++)
            {
                printf(" ");
            }
            //'for' loop for printing *
            for(c = 1; c <= 2*r-1; c++)
            {
                printf("*");
            }

            printf("\n");
        }
 }