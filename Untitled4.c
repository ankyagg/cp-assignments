// multiply two matrices...

#include<stdio.h>
void main()
{
    int a[2][3],b[3][4],c[2][4],i,j,sum;

    // taking values for matrix a
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
        printf("Enter %d %d element for matrix a", i,j);
        scanf("%d", &a[i][j]);
        }

    }



    printf("\n");
    // taking values for matrix b
    for(int i=0; i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter %d %d element for matrix b", i,j);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            //calculating the multiplied value
            for(int k=0;k<4;k++)
            {
                sum+= a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;


        }
        for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            //calculating the multiplied value
            printf("")



        }

    }


}
