//program to find remainder of two numbers without using modular operator
#include <stdio.h>
int main()
{
    //remainder = dividend - (divisor*quotient);
    int a,b;
    printf("enter the values of  and b");
    scanf("%d%d",&a,&b);
    int quotient = a/b;
    int remainder = a-(b*quotient);
    printf("your remainder is %d",remainder);
}