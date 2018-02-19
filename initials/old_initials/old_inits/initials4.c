#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
char init[10];

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
            }
            
    
    // init[0] = letters[0];
 
    // count through letters looking for spaces
    for (int j = 0; j < n; j++)
    {
    while (letters[j] == 32) 
        { 
            j ++; 
        }
            
    // looks for a space in front of a letter
    if ((letters[j-1] == 32) && (letters[j] != 32))
        {
            init[c] = letters[j];
            c += 1;
        }
    
    
    
    //((name[j] == 32) && (name[j+1] != 32)
   
    }    
    
    // print out initials
    for (int k = 0; k <= c; k++)
    {
     /*   while (init[k] == " ")
        {
            k ++;
        }
        */
        
        printf("%c", toupper(init[k]));
        
    }    
 
   printf("\n"); 
}

