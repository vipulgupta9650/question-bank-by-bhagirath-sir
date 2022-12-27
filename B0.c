//c program to find factorial of a number n
#include <stdio.h>
int main()
{
int n;
printf("enter n");
scanf("%d",&n);
int i=1;
int factorial =1;
while(i<=n)
{factorial=factorial*i;
  i++;
    
}
printf("%d",factorial);
    return 0;
}
//yha se ye seekha ki printf kisi kisi cases mai loop ke baahar hee print karwana hoga
