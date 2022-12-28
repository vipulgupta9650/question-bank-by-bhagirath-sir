//while purchasing certain items a discount of 10% is offered if the quantity purchased if more than 20. WAP to chalculate discounted amount
#include <stdio.h>
int main()
{
    float price;
    printf("enter the price");
    scanf("%f",&price);
    if(price>20)
    {
        printf("your discount is %.2f",0.1*price);
    }
    else
    {
        printf("sorry your discount is rupees zero");
    }


 return 0;
}