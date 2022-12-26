//write a program to print total seconds in a given time
#include <stdio.h>
int main()
{
    int hour ,minutes ,seconds ,total_seconds;
    printf("enter hour,minutes and seconds");
    scanf("%d%d%d",&hour,&minutes,&seconds);
    total_seconds= (3600*hour+60*minutes+seconds);
    printf("your total seconds in %d hours , %d minutes and %d seconds is %d seconds",hour,minutes,seconds,total_seconds);
    return 0;
}
