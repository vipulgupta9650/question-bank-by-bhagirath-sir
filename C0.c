/* if cost price and selling price of an item is input throgh the keyboard write a program to determine whether the seller has made a profit or loss . 
also determine how much profit or loss he incurred*/
#include <stdio.h>
int main()
{

float cost_price , selling_price;
printf("enter your cost price and selling price");
scanf("%f%f",&cost_price,&selling_price);
if(selling_price > cost_price)
{
    printf("the shopkeeper have made a profit of %f rupees\n",selling_price - cost_price);
    printf("the percentage of profit made by him is %f percent",(((selling_price - cost_price)/cost_price)*100));
}
else if(cost_price > selling_price)
{
    printf("the shopkeeper have made a loss of %f rupees\n",cost_price - selling_price);
    printf("the percentage of loss made by him is %f percent\n",(((cost_price - selling_price)/cost_price)*100));
} 

else 
{
    printf("shopkeeper have neither made profit nor loss");
}

return 0;
}