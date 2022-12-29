//write a program to create a simple calculator which can do addition , subtraction , multiplication , division and modulus (remainder)
#include <stdio.h>
int main()
{
float a,b;
printf("enter the values of a and b");
scanf("%f%f",&a,&b);
fflush(stdin);
char operator;
printf("enter the operator");
operator = getchar();
switch (operator)
{
    case '+' : printf("%f",a+b);
    break;
    case '-':printf("%f",a-b);
    break;
    case '*' : printf("%f",a*b);
    break;
    case '/' : printf("%d",(int)a/(int)b);
    break;
    case '%' : printf("%d",(int)a % (int)b);
    break;
    default : printf("the operator does not match in your calculator");
}



 return 0;
}