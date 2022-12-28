//c program to find all factors of a natural number
#include <stdio.h>
int main()
{
int n;
printf("enter n");
scanf("%d",&n);
int i=1;
while(i<=n)
{
    if(n%i==0)
    {
        printf("%d\n",i);
    }
    i++;
}

    return 0;
}
//doubt : how to write " your factors of the number are :" one time in start of printing factors