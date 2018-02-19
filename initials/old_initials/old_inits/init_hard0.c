#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char initials[100];
int c = 0;

int main(void)
{
    string name = get_string();
    if (name != NULL)
    {
        // check if the first character is a letter and add it to initials array
        if (name[0] != ' ')
        {
            initials[c] = name[0];
            c ++;
        }
            
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            // look for multiple spaces and iterate past them
            while (name[i] == ' ')
            {
                i ++;
            }
            

            // look for a letter appearing after a space and if so print that letter in uppercase
            if (name[i] != ' ' && name[i-1] == ' ')
            {
                    initials[c] = name[i];
                    c ++;
            }
        }    
    }
    // print the initals array
    for (int j = 0; j <= c; j++)
    {
        printf("%c", toupper(initials[j]));
    }
    printf("\n");
}    