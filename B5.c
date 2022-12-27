//c program to check armstrong number
#include <stdio.h>
#include <math.h>
int main()
{
int n,digits;
printf("print number of digits in the number and the number");
scanf("%d%*d",&digits,digits,&n);
fflush(stdin);
int number=n;
int sum=0;
while(digits<=n)
{
    number=number % (int)pow(10,digits);
    printf("%d\t",number);
    sum=sum+pow(number,digits);
      digits++;
}
if(sum=n)
{
    printf("number is an armstrong number");
}
else 
{
        printf("number is not an armstrong number");
}
    return 0;
}
