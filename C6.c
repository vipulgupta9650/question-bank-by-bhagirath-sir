//c program to find absolute value of a number
#include <stdio.h>
int main()
{
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 if(n>=0)
{
 printf("%d",n);
}
else
{
    printf("%d",-n);
}
    return 0;
}