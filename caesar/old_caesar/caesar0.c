#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(int argc, string argv[])
{
    // test for invalid command line arguments
    if ((argc == 1) || (argc > 2))
    {
    printf("Please enter just one positive integar on the command line\n");
    return 1;
    }
    
    // convert command line string to ineger
    int key = atoi(argv[1]);
    
    // test to make sure integer is positive
    if (key <= 0) 
    {
        printf("invalid integer\n");
        return 1;
    }
    
    // if key is greater than 26 then divivde and use the modulo
    if (key > 26)
    {
        key %= 26;
    }
    
    //printf("cipher key is %i\n", key);
    
    // get the user input
    printf("plaintext: ");
    string plainText = get_string();
    int n = strlen(plainText);
    
    
    // create the cipher
    printf("ciphertext: ");
    
    for (int i = 0; i < n; i ++)
    {
        // test to see if character is a letter
        if (isalpha (plainText[i]))
        {
            //if (isalpha (plainText[i] + key))
            if (((plainText[i] > 97) && ((plainText[i] + key) > 122)) || ((plainText[i] < 91) && ((plainText[i] + key) > 90)))
            {
                printf("%c", ((plainText[i] + key) - 26));
                //printf("%c", (plainText[i] + key));
            }
            else
            {
                printf("%c", (plainText[i] + key));
            }
            
            
            /* cycle around if the letter with cipher key goes out of range
            if ((plainText[i] < 91) && (plainText[i + key] > 90))
            {
                printf("%c", (plainText[i + key] - 26)); 
            }
            
            else if ((plainText[i] > 97) && (plainText[i + key] > 122))
            {
                printf("%c", (plainText[i + key] - 26)); 
            }
            else
            {
            printf("%c", (plainText[i] + key));
            }
        }
        printf("%c", (plainText[i])); */ 
        }
        else
        {
            printf("%c", (plainText[i]));
        }
    }
   
     printf("\n");   
 
    
}


