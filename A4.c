//program to calculate simple intrest
#include <stdio.h>
int main()
{
    float P,R,T;//P is principal R is time and T is time period
printf("enter the values of principal , rate and time period");
scanf("%f%f%f",&P,&R,&T);
float simple_intrest=P*R*T/100;
printf("your simple intrest for %f years is %f",T,simple_intrest);
    return 0;
}