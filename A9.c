//check if the alphabet is an uppercase letter or lowercase letter
#include <stdio.h>
int main()
{
char ch;
printf("enter the character");
ch=getchar();
if(ch>=65 && ch<=90)
{
    printf("entered character is an uppercase letter");
}
else if(ch>=97 && ch<=122)
{
    printf("entered character is a lowercase letter");
}
else{
    printf("not an english letter");
}

    return 0;
}
