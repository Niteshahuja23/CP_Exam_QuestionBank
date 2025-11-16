//Write a program to demonstrate Bitwise operators.
#include<stdio.h>
int main()
{
    int a = 5, b = 10, c;
    printf("Initial values: a = %d, b = %d\n", a, b);
    c = a & b;
    printf("Bitwise AND: a & b = %d\n",c);
    c = a | b;
    printf("Bitwise OR: a | b = %d\n",c);
    c = a ^ b;
    printf("Bitwise XOR : a ^ b = %d\n",c);
    c = ~a;
    printf("Bitwise NOT: ~a = %d\n",c);
    c = a << b;
    printf("Bitwise Left Shift: a << b = %d\n",c);
    c = a >> b;
    printf("Bitwise Right Shift: a >> b = %d\n",c);
    //Note: remember the directions of left and right shift, as they are confusing!

    return 0;
}