//c program to reverse a 4 digit  number
#include <stdio.h>
int main()
{
int n;
printf("enter the number n");
scanf("%4d",&n);
fflush(stdin);
if(n>999)
{
   
    int first_digit=n/1000;
    int second_digit =(n%1000)/100;
    int third_digit = (n%100)/10;
     int last_digit=n%10;
     printf("your reversed number is %d",(1000*last_digit+100*third_digit+10*second_digit+first_digit));
    
}
else {
    printf("number is not a 4 digit number");
}



    return 0;
}