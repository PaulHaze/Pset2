#include <cs50.h>
#include <stdio.h>
#include <string.h>

//int c = 1;
//char initial = 0;

int main(void)
{
    string name = get_string();
    
        printf("%c", name[0]);
        for (int i = 0, n = strlen(name); i < n; i++)
        {
            
            //printf("%c", name[i]);
            if  (name[i] == 32) //&& (name[i+1] 
            {
                printf("%c", name[i+1]);
                //c ++;
            }
        }    
    //printf("first inital: %c\n", firstInit);
    printf("\n");
    
    
}