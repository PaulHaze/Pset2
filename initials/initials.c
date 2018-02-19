#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        // check if the first character is a letter and if so print it
        if (name[0] != ' ')
        {
            printf("%c", toupper (name[0]));
        }
            
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            // look for multiple spaces and iterate past them
            if (name[i] == ' ' && name[i+1] == ' ')
            {
                i ++;
            }
            
            // look for a letter appearing after a space and if so print that letter
            if (name[i] != ' ' && name[i-1] == ' ')
            {
                printf("%c", toupper (name[i]));
            }
        }    
    }
    
    printf("\n");
    
}    