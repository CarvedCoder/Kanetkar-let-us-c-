/*
get a character
store the ASCII value
if code blocks w.r.t to data
*/
#include <stdio.h>
int main(void)
{
    char ch;
    int x;
    printf("please input a character : ");
    scanf("%c", &ch);
    x = ch;
    if (x > 65 && x < 90)
    {
        printf("it is a capital letter\n");
    }
    else if (x > 97 && x < 122)
    {
        printf("it is a small case letter\n");
    }
    else if (x > 48 && x < 57)
    {
        printf("it is a digit\n");
    }
    else if (x > 0 && x < 47 || x > 58 && x < 64 || x > 91 && x < 96 || x > 123 && x < 127)
    {
        printf("it is a special charecter\n");
    }
}