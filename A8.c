// swap two integer without using third variable
#include <stdio.H>
int main()
{
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
a=b;
printf("your new value of a is %d\n\n\n\n\n",a);
printf("enter the initial value of a");
scanf("%d",&a);
b=a;
printf("\n\n\nyour new value of b is %d",b);



    return 0;
}