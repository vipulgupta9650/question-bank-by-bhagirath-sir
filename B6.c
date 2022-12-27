//c program to check whether a number is a prime number or not
#include <stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
int i=2;
while(i<n)
{
    if(n%i==0)
    {
        printf("not a prime number"); //doubt:yes it is a prime number ko kaha kaise likhenge
        break;
    }
        i++;
    
}



    return 0;
}
