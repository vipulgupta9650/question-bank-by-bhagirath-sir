// write a program to check whether a number is a palindrome number or not
//this solution is not working as we expected in running
#include <stdio.h>
#include <math.h>
int main()
{
int n,digits;
printf("enter no of digits in the number");
scanf("%d",&digits);
printf("enter n");
scanf("%d",&n);
if(n >= pow(10,(digits-1)) && n<pow(10,digits))
{ 
    int sum,temp,r,s;
    s=n;
    r=0;
    sum=0;
    while(digits>=1)
    { 
      temp = s /(int)pow(10,digits-1);
        sum = sum+temp*pow(10,r);
        r=r+1;
        s = s%(int)pow(10,(digits-1));
        digits--;  
    }
    if(sum==n)
    {
        printf("number is a palindrome number");
    }
    else 
    {
        printf("number is not a palindrome number");
    }
}
return 0;
}