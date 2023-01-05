//write a program to check whether the number is prime or not
#include <stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
int flag =1;
int i;
for(i=2;i<=n/2;i++)
{
 if(n%i==0)
 {
    flag =0;
    break;
 }
}
if (flag ==1)
{
    printf(" prime");
}
else if (flag ==0)
{
    printf(" not prime");
}
 return 0;
}
