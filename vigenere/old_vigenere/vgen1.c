#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int convertLetter(char x);
char codeLetters(char a, int b);


int main(int argc, string argv[])
{
    // test for more or less than one command line argument
    if (argc != 2)
    {
        printf("Incorrect aurguments on command line. Correct use: ./vigenere cipherkey\n");
        return 1;
    }
    
    string cipher = argv[1];
    int c = strlen(cipher);
    
    // iterate over cipher key and test for only characters
    for (int i = 0;  i < c; i ++)
    {
        if (!isalpha (cipher[i]))
        {
            printf("Incorrect aurguments on command line. Cipher key has to be alphabetical characters only\n");
            return 1;
        }
    }
    
    // create a numerical index to apply the cipher
    int cipherArray[c];
    
    for (int i = 0; i < c; i ++)
    {
        cipherArray[i] = convertLetter(cipher[i]);
        //printf("cipher Letter %c is alphabet index %i\n", cipher[i], cipherArray[i]);
    } 

    printf("plaintext: ");
    string plainText = get_string();
    int pT = strlen(plainText);
    
    printf("ciphertext: ");
    
    // begin the loop to convert each letter
    int j = 0; // int for the cipher index to wrap around
    for (int i = 0; i < pT; i ++)
    {
        // test for text characters and skip if not
        if (isalpha (plainText[i]))
        {
            // reset cipher array index to if reaches greater than c-1
            if (j == c)
            { 
                j = 0;
            } 
        
            char a = plainText[i];
            int b = cipherArray[j];
        
            char code = codeLetters(a, b);
            printf("%c", code);
            
            /*if (((plainText[i] < 91) && ((plainText[i] + cipherArray[j]) > 90)) || ((plainText[i] > 97) && ((plainText[i] + cipherArray[j]) > 122))) 
            {
                printf("%c", ((plainText[i] + cipherArray[j]) - 26));
            }
            else
            {
                printf("%c", (plainText[i] + cipherArray[j]));
            }
            */
            
            j ++;
        }
        
        else
        {
            printf("%c", (plainText[i]));    
        }
    }
  

 printf("\n");
   
  return 0;
}

// function to convert an ASCII character into a numerical value, starting at 0
int convertLetter(char x)
{
    int y = x;
    
    if (isupper (x))
        {
            y -= 65;
        }
        else 
        {
            y -= 97;
        }
    
    return y;
}

// function to convert characters and keep case
char codeLetters(char a, int b)
{
    char code = a;
    
    if (((a < 91) && (a + b) > 90) || ((a > 97) && (a + b) > 122))
    {
        code = (a + b) - 26;
    }
    //else
    //{
        code = a + b;
    //}
    
    return code;
}
