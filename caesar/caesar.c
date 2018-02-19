#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // test for invalid command line arguments
    if (argc != 2)
    {
        printf("Please enter just one positive integar on the command line\n");
        return 1;
    }
    
    // convert command line string to integer + test for positive
    int key = atoi(argv[1]);
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
 
    // get the user input
    printf("plaintext: ");
    string plainText = get_string();
    int n = strlen(plainText);
    
    // create the cipher
    printf("ciphertext: ");
    
    for (int i = 0; i < n; i ++)
    {
        // test to see if character is a letter & ignore it if it isnt
        if (isalpha (plainText[i]))
        {
            // check to see if they cipher key goes out of range and to cycle around if it does
            if (((plainText[i] < 91) && ((plainText[i] + key) > 90)) || ((plainText[i] > 97) && ((plainText[i] + key) > 122))) 
            {
                printf("%c", ((plainText[i] + key) - 26));
            }
            else
            {
                printf("%c", (plainText[i] + key));
            }
            
        }
        else
        {
            printf("%c", (plainText[i]));
        }
    }
    printf("\n");   
}


