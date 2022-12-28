//swap two integer without using third variable
#include <stdio.h>
int main()
{
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("your values of a and b are %d\t%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("your new values of a and b are %d\t%d",a,b);


    return 0;
}
