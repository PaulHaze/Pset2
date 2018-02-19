#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 1;
int spaces = 0;
char initials[10];


int main(void)
{
    string name = get_string();
    int n = strlen(name);
    
    // calculate spaces to determine the size of initials array
    for (int i = 0; i < n; i++)
        {
        if (name[i] == 32)
            {
                spaces += 1;
            } 
        }
    // the initials array size will always be one 
    
    //int d = 10;
    //char initials[d];
          
    //printf("spaces are %i, so amount of initials must be %i\n", spaces, spaces+1);        
            
    // calculate spaces and amount of initials
    
    initials[0] = name[0];
 
    // count through letters looking for spaces
    for (int j = 0; j < n; j++)
    {
    if (name[j] == 32)
        {
            
            initials[c] += name[j+1];
            c += 1;
        }
    }    
    
    // print out initials
    for (int k = 0; k <= c; k++)
    {
        printf("%c", toupper(initials[k]));
        
    }    
 
   printf("\n"); 
}

