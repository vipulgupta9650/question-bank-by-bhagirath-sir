//program to print total seconds in a given time
#include <stdio.h>
int main()
{
int h,m,s;//here h reperesent hour , m represent minute , s represent seconds
printf("enter the hours , minutes and seconds");
scanf("%d%d%d",&h,&m,&s);
int total_seconds= (3600*h+60*m+s);
printf("total seconds in %d hours %d minutes and %d seconds is %d",h,m,s,total_seconds);

    return 0;
}