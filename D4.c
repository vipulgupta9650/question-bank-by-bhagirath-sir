//write a program to add all natural numbers between m and n both inclusive
#include <stdio.h>
int main()
{
int m,n;//m is smaller or equal to  n
printf("enter the value of m or n");
scanf("%d%d",&m,&n);
if(m>n)
{
 int c;
 c=m;
 m=n;
 n=c;
}
int sum =0;
for(int i =m;i<=n;i++)
{
 sum = sum+i;
}
printf("%d",sum);

 return 0;
}