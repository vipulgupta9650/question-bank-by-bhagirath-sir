// program to calculate area and perimeter of a rectangle 
#include <stdio.h>
int main()
{
    int l,b;//l and b are length and breadth of the rectangle
    printf("enter l and b");
    scanf("%d%d",&l,&b);
    printf("perimeter =%d area = %d",2*(l+b),l*b);


    return 0;
}