//Write a program to display the odd numbers from 1 to 100 that are divisible by 5.
#include<stdio.h>
int main()
{
    int i;
    printf("Odd numbers from 1 to 100 that are divisible by 5:\n");
    for(i= 1; i<=100; i += 2)
    {
        if(i % 5 == 0)
        {
            printf("%d\n",i);
        }
    }
}