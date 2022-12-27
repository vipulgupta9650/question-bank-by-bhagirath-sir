//c program to calculate sum of first n natural numbers
#include <stdio.h>
int main()
{
int n,i=1;
printf("enter the value of n");
scanf("%d",&n);
int sum=0;
while(i<=n)
{
    sum=sum+i;
    i++;
}
printf("%d",sum);


    return 0;
}