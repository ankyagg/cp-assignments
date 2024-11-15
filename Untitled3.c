 // assignment 3

//to find a  factorial of a number
#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c,i,fact=0,sum=0,digit,copy,count=0,large,lcm,gcd,choice,start;
    start:
    printf("1.factorial\n2.angstrom\n3.perfect square\n4.prime number\n5.largest of three numbers\n6.lcm\n7.gcd\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);

    if((choice<1)||(choice>7)){
        printf("Invalid input! Enter the choice(1-7):");
        goto start;
    }
    else
    {
        printf("Enter the values of a,b,c");
        scanf("%d%d%d",&a,&b,&c);
    }
switch(choice)
{
    //factorial of number
    case 1: for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    printf("%d\n",fact);
    break;

    //armstrong number
    case 2: copy=a;
    while(a>0)
    {
        digit=a%10;
        sum=sum+digit*digit*digit;
        a=a/10;
    }
    if(sum==copy)
    {
        printf("%d is an armstrong number\n",sum);
    }
    else
    {
        printf("its not a armstrong no.");
    }
    break;

    // perfect square
    case 3: i=sqrt(a);
            if(a-(i*i)==0)
            {
                printf("The square of %d is %d");
            }
            else
            {
                printf("IT is not a perfect square");
            }
    //prime number
    case 4: for(i = 1; i<=a;i++)
    {
        if((a%i)==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime no.\n",a);
    }
    else
    {
        printf("IT is not a prime no.");
    }
    break;

    //largest number
    case 5: if((a>b)&&(a>c))
    {
        printf("The largest no. is a");
    }
    else if((b>a)&&(b>c))
    {
        printf("The largest no. is b");
    }
    else
    {
        printf("The largest no. is c");
    }
    break;

    //lcm
    case 6: if(a>b)
    {
        lcm = a;
    }
    else
    {
        lcm = b;
    }
    while((lcm%a)||(lcm%b)!=0)
    {
        lcm++;
    }
    printf("the lcm of %d and %d is = %d\n", a ,b , lcm);
    break;

    //gcd
    case 7: if(a<b)
    {
        gcd = a;
    }
    else
    {
        gcd = b;
    }
    while ((a%gcd)||(b%gcd)!=0)
    {
        gcd--;
    }

        printf("The gcd of %d and %d is =%d\n", a,b,gcd);

    break;
}
char retry;
printf("DO you want to perform another operation (y/n):");
scanf(" %c", &retry);

if((retry=='y')||(retry=='Y'))
{
goto start;
}
else
{
    printf("The program has ended");
}
}
