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
        printf("Incorrect arguments on command line. Correct use: ./vigenere cipherkey\n");
        return 1;
    }
    
    string cipher = argv[1];
    int c = strlen(cipher);
    
    // iterate over cipher key and test for only characters
    for (int i = 0;  i < c; i ++)
    {
        if (!isalpha (cipher[i]))
        {
            printf("Incorrect arguments on command line. Cipher key has to be alphabetical characters only\n");
            return 1;
        }
    }
    
    // create a numerical index to apply the cipher
    int cipherArray[c];
    
    for (int i = 0; i < c; i ++)
    {
        // iterate through the cipher and place each letter as an integar into the array
        cipherArray[i] = convertLetter(cipher[i]);
    } 

    printf("plaintext: ");
    string plainText = get_string();
    int pT = strlen(plainText);
    
    printf("ciphertext: ");
    
    // begin the loop to convert each letter
    for (int i = 0, j = 0; i < pT; i ++)
    {
        // test for alphabetical characters and skip if not
        if (isalpha (plainText[i]))
        {
            if (j == c) // reset cipher array index if it is greater than (c-1)
            { 
                j = 0;
            } 
        
            char code = codeLetters(plainText[i], cipherArray[j]);
            printf("%c", code);
            
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

// function to convert an ASCII character into a numerical value, starting at A=0
int convertLetter(char x)
{
    if (isupper (x))
        {
            x -= 65;
        }
        else 
        {
            x -= 97;
        }
    
    return x;
}

// function to convert characters and keep case
char codeLetters(char a, int b)
{
    char code;
    
    if (((a < 91) && (a + b) > 90) || ((a > 97) && (a + b) > 122))
    {
        code = (a + b) - 26;
    }
    else
    {
        code = a + b;
    }
    
    return code;
}
