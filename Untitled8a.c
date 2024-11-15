// string

#include<stdio.h>
#include<string.h>

void main ()
{
    char str1[50]= "Hello";
    char str2[50]= "Worlddd";
    char str3[50];

    printf("Length of str1 is : %d\n", strlen(str1));

    strcpy(str3, str1);
    printf("str3 after  copying from str1 is : %s\n", str3);

    int result = strcmp(str1,str2);

    if (result ==  0)
    {
        printf("str1 and str2 are equal\n");
    }
    else if ( result > 0){
        printf("str1 is greater than str2\n");
    }
    else
    {
        printf("str2 is greater than str1\n");
    }
    strcat(str1,str2);
    printf("%s", str1);
}
