//write a program to swap two numbers
#include <stdio.h>
int main()
{
  int a,b,c;
  printf("enter two numbers a and b");
  scanf("%d%d",&a,&b);
  printf("your old values of a and b are %d\n%d\n",a,b);
  c=a;
  a=b;
  b=c;
  printf("your new values of a and b are %d\n%d",a,b);

    return 0;
}