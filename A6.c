//input total seconds and convert them into hours,minutes and seconds
#include <stdio.h>
int main()
{
    int total_seconds;
    printf("enter total seconds");
    scanf("%d",&total_seconds);
    int hour = total_seconds/3600;
    int minutes = (total_seconds % 3600)/60;
    int seconds = (total_seconds - 3600*hour-60*minutes);
    printf("your hours , minutes and seconds are %d\n%d\n%d",hour,minutes,seconds);

    return 0;
}