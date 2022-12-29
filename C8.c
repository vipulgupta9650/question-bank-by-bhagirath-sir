//write a program to print weekdays (1-monday 2-tuesday 3-wednesday and so on)
#include <stdio.h>
int main()
{
int n;
printf("enter the number of the day of week");
scanf("%d",&n);
fflush(stdin);
switch (n)
{
    case 1: printf("monday");
    break;
    case 2: printf("tuesday");
    break;
    case 3: printf("wednesday");
    break;
    case 4: printf("thursday");
    break;
    case 5: printf("friday");
    break;
    case 6: printf("saturday");
    break;
    case 7 : printf("sunday");
    break;
    default : printf("the number entered does not match with any day of the week");
}
 return 0;
}