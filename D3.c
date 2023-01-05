// program to convewrt A to a and a to A
#include <stdio.h>
#include <ctype.h>
int main()
{
char ch;
printf("enter a character ");
ch=getchar();
if(isalnum(ch))
{
    if(isupper(ch))
    {
        ch = tolower(ch);
        printf("%c",ch);
    }
    else if(islower(ch))
    {
        ch=toupper(ch);
        printf("%c",ch);
    }
}
else 
{
    printf("not an alphabet and numerator");
}
 return 0;
}