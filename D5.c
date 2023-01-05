// write a program to find total digits of a number
#include <stdio.h>
int main ()
{
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 int temp;
 temp=n;
 int digits=0;
 while(temp!=0)
 {
  temp = temp/10;  
  digits++; 
 }
 printf("your number of digits in the given number %d is %d",n,digits);


 return 0;
}