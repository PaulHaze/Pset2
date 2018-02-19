#include <cs50.h>
#include <stdio.h>
#include <string.h>

int c = 1;
//char initial = 0;

int main(void)
{
    string name = get_string();
    
        char init[0] = name[0];
        printf("%c"), init;
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            
            //printf("%c", name[i]);
            if  (name[i] == 32)
                init[c] += name[i+1]
                printf("%c", init[]); //name[i+1]);
                c ++;
            }
        }    
    //printf("first inital: %c\n", firstInit);
    printf("\n");
    
    
}