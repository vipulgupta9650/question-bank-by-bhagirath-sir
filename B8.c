//write a program to merge three number example : n1=2 , n2=1 , n3=6 is 216
#include <stdio.h>
int main()
{
int n1,n2,n3;
printf("enter the values of n1,n2 and n3");
scanf("%d%d%d",&n1,&n2,&n3);
int number = 100*n1+10*n2+n3;
printf("your merged number is %d",number);
    return 0;
}