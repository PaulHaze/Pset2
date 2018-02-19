#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
char init[3];

//char initial = 0;

int main(void)
{
    string name = get_string();
    int n = strlen(name);
    char letters[n];
    
    // convert string 'name' into individual letters
    for (int i = 0; i < n; i++)
            {
              letters[i] = name[i];
              
              //printf("%c\n", init[i]);
              
            }
            
    
    init[0] = letters[0];debug50 
 
    // count through letters looking for spaces
    for (int j = 0; j < n; j++)
    {
    if (name[j] == 32)
        {
            c += 1;
            init[c] = name[j+1];
        }
    }    
    
    // print out initials
    for (int k = 0; k <= c; k++)
    {
        printf("%c", toupper(init[k]));
        
    }    
 
   printf("\n"); 
}

