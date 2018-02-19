#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
int spaces = 0;
char init[10];


//char initial = 0;

int main(void)
{
    string name = get_string();
    int n = strlen(name);
    char letters[n];
    
    // convert string 'name' into individual letters and count spaces
    for (int i = 0; i < n; i++)
            {
              letters[i] = name[i];
              if (letters[i] == 32)
              {
                  spaces +=1;
              } 
              
            }
            
    //printf("spaces are %i, so amount of initials must be %i\n", spaces, spaces+1);        
            
    // calculate spaces and amount of initials
    //char init[spaces + 1];
    init[0] = letters[0];
 
    // count through letters looking for spaces
    for (int j = 0; j < n; j++)
    {
    if (letters[j] == 32)
        {
            c += 1;
            init[c] += letters[j+1];
        }
    }    
    
    // print out initials
    for (int k = 0; k <= c; k++)
    {
        printf("%c", toupper(init[k]));
        
    }    
 
   printf("\n"); 
}

