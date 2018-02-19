#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        printf("hello, %s\n", argv[1]);
        printf("what word do you want me to print?  ");
        int word = get_int();
        printf("%s\n", argv[word-1]);
        
        printf("what number letter do you want me to print?  ");
        int index = get_int();
        printf("%c\n", argv[word-1][index-1]);
    }
    else
    {
        printf("hello world\n");
        
    }
}