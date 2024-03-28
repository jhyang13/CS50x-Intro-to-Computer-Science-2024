#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// argc to accept # of variables; argv to accept string
int main(int argc, string argv[])
{

    // If no key is entered, then stop the program
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // If key is not a number, then stop the program
    for (int i = 0; i <= strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert the string to a integer
    int key;
    key = atoi(argv[1]);

    // Input plaintext
    string plain_text;
    plain_text = get_string("Plaintext:");

    printf("Ciphertext:");

    // Use Caesar’s algorithm to encrypt the plaintext
    // The Caesar’s algorithm is c = ( p + k ) % 26
    // 97 is a; 65 is A
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isupper(plain_text[i]))
        {
            printf("%c", ((plain_text[i] - 65) + key) % 26 + 65);
        }
        else if (islower(plain_text[i]))
        {
            printf("%c", ((plain_text[i] - 97) + key) % 26 + 97);
        }
        else
        {
            printf("%c", plain_text[i]);
        }
    }
    printf("\n");
}