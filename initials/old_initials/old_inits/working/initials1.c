#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
int spaces = 0;

int main(void)
{
    string name = get_string();
    int n = strlen(name);
    
    /* for (int i = 0; i < n; i++)
    {
        if (name[i] == 32)
        {
            spaces +=1;
        } 
              
    }
    */

    // char initials[10];
    
    // first letter is always going to be the first initial
    // initials[0] = name[0];
    printf("%c", toupper (name[0]));
 
    // count through letters looking for spaces + add the first letter after a 
    // space to the initials array
    for (int j = 0; j < n; j++)
    {
        if (name[j] == ' ')
        {
            printf("%c", toupper (name[j+1]));
            //c += 1;
            //initials[c] += name[j+1];
        }
    }    
    
    /* print out initials
    for (int k = 0; k <= c; k++)
    {
        printf("%c", toupper(initials[k]));
    }    
 */
   printf("\n"); 
}

