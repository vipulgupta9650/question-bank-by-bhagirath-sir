// write a program to print the grade of a student ('A' if per >=80 'B' if per >=60 'c'if per >=40 otherwise fail) 
#include <stdio.h>
int main()
{
float per;//per refers to percentage

printf("enter the percentage");
scanf("%f",&per);
fflush(stdin);
int s = (int)per/10;
switch(s)
{
    case 10:
    case 9:
    case 8: printf("your grade is A " );
    break;
    case 7 :
    case 6: printf("your grade is B");
    break;
    case 5:
    case 4: printf("your percentage is C");
    break;
    default : printf("BETTER LUCK NEXT TIME");
}
 return 0;
}