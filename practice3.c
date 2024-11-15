//Write a Program to find the factorial, check whether the number is Armstrong, and
//check for perfect square, prime number, largest of three numbers, LCM and GCD
//using switch case. Also use Goto statments


#include<stdio.h>
#include<math.h>

void main ()
{
    int a,b,c,i,fact=1,choice,count,start,copy,digit,sum=0,lcm,gcd;
    start:
    printf("1.factorial\n2.Armstrong\n3.Perfect square\n4.prime no.\n5.largest of three\n6.lcm\n7.gcd\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if((choice<1)||(choice>7))
    {
        printf("INVALID INPUT, please choose a number (1-7)");
        goto start;
    }
    else
    {
        printf("Enter values of a,b,c:");
        scanf("%d%d%d", &a,&b,&c);
    }
        switch(choice)
        {

        //factorial(factorial of a)
        case 1:for(int i=1;i<=a;i++)
        {
            fact *= i;
        }
        printf("The factorial of %d is %d",a,fact);
        break;

        //Armstrong no.
        case 2: copy =a ;
        while(a>0)
        {
            digit=a%10;
            sum = sum+digit*digit*digit;
            a=a/10;
        }
        if(sum==copy){
            printf("Entered value is armstrong no.");
        }
        else{
            printf("Entered value is not a armstrong no.");
        }
        break;

        // Perfect sqaure of a
        case 3:
            i=sqrt(a);
            if (a-(i*i)==0)
        {
            printf("Entered value is a perfect square");
        }
        else
        {
            printf("Entered value is not a perfect sqaure");
        }
        break;

        //Prime no.
        case 4: for (int i=1;i<=a;i++)
                {
                   if(a%i==0)
                   {
                       count++;
                   }
                }
                   if(count==2)
                   {
                       printf("It is a prime no.");
                   }
                   else{
                    printf("It is not a prime no.");
                   }
                break;

        //largest of 3 no.
        case 5: if ((a>b)&&(a>c))
        {
            printf("A is the largest among the others");
        }
        else if((b>c)&&(b>a))
        {
            printf("B is the largest among the others");
        }
        else
            printf("C is the largest among the others");
            break;

        //lcm
        case 6: if(a>b)
        {
            lcm = a;
        }
        else
        {
            lcm =b;
        }
        while((lcm%a)||(lcm%b)){
            lcm++;
        }
        printf("lcm of a and b is %d", lcm);
    }




}
