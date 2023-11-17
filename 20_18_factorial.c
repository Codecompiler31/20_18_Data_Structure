#include<stdio.h>
long factorial(int n)
{
    if (n==0)
        return 1;
    else
        return(n*factorial(n-1));
}

void main()
{
    int num;
    long fact;
    printf("Enter the number :");
    scanf("%d",&num);
    fact = factorial(num);
    printf("The factorial of %d is %d",num,fact);
}
