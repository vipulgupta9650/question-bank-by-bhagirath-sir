// write a program to print the factorial of a given number
#include <stdio.h>
int main()
{
int n,i;
printf("enter the value of n");
scanf("%d",&n);
fflush(stdin);
int factorial =1;
for(i=1;i<=n;i++)
{
    factorial = factorial *i;
}
printf("\tyour factorial of the given number is %d",factorial);
 return 0;
}
