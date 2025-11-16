//Write a program to display the prime numbers in between 75 to 150.
#include<stdio.h>
int main()
{
    int i,j,ans;
    int isPrime(int);
    printf("Prime numbers between 75 and 150 are:\n");
    
    for(i = 75; i<= 150; i++)
    {
        ans = isPrime(i);
        if(ans == 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
int isPrime(int n)
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
    return flag;
}