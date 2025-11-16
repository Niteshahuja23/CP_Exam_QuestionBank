//Write a program to check the given number is even/odd, perfect square and primenumber.
#include<stdio.h>
int main()
{
    int n;
    void checkEvenOdd(int);
    void checkPerfectSquare(int);
    void isPrime(int);
    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);
    checkPerfectSquare(n);
    isPrime(n);

    return 0;
}
void checkEvenOdd(int n)
{
    if(n%2 == 0)
    {
        printf("%d is an Even number.\n",n);
    }
    else if(n%2 != 0)
    {
        printf("%d is an Odd number.\n",n);
    }
}
void checkPerfectSquare(int n)
{
    int i, flag = 0;
    for(i = 1; i <= n/2; i++)
    {
        if(i*i == n)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d is a perfect square of %d.\n", n, i);
    }
    else if(flag == 0)
    {
        printf("%d is not a perfect square number.\n", n);
    }
}
void isPrime(int n)
{
    int flag,i;
    flag = 1;
    for(i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
    {
        printf("%d is a Prime number.\n", n);
    }
    else
    {
        printf("%d is not a Prime number.\n", n);
    }
}