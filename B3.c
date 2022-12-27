//c program to calculate sum of natural numbers between m and n both inclusive
#include <stdio.h>
int main()
{
int m,n;
printf("enter m and n");
scanf("%d%d",&m,&n);
if(m>=n)
{

int sum=0;
int i=n;
while(i<=m)
{
    sum=sum+i;
    i++;
}
printf("your sum of all natural numbers between these natural numbers is %d",sum);
}
else if(n>=m)
{
    int sum=0;
    int i=m;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("your sum of all natural numbers between these natural numbers is %d",sum);
}

    return 0;
}