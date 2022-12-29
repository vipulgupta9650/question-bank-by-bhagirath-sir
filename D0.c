//write a program to print the table of a given number
#include <stdio.h>
int main()
{
int n;
printf("enter the value of n");
scanf("%d",&n);
fflush(stdin);
int i;
printf(" your table of the given number is :");
for(i=1;i<=10;i++)
{
    printf("%4d",n*i);
}
 return 0;
}