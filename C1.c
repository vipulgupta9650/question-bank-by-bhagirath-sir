//c program to check if a number is prime or not
#include <stdio.h>
int main()
{
int n;
printf("enter n");
scanf("%d",&n);
int i=2;
while(i<n)
{
    if(n%i==0)
    {
        printf("not a prime number");
        break;
    }
    if(n%i)
}

    return 0;
}