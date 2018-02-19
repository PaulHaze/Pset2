#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int c = 0;
int spaces = 0; //used to calculate the size of the array for initals
char initials[5];

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
            
       
    //printf("spaces = %i\n", spaces);        
    // calculate spaces and amount of initials
    //int d = spaces + 1;
    //printf("%i\n", d);
    //char initials[d];
    
    
    // first letter entered will always be the first initial
    initials[0] = letters[0];
    printf("%c\n", initials[0]);
 
    //iterate through letters looking for spaces and pick the letter after
    for (int j = 0; j < n; j++)
        {
            if (letters[j] == 32)
            {
            initials[c] += letters[j+1];
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

