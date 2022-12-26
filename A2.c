//check if the alphabet is upper case or lower case without using <ctype.h>

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
    else if(ch>=97 &&ch<=122)
    {
        printf("entered character is a lowercase alphabet");
    }
    else 
    {
        printf("not an english letter");
    }


    return 0;
}