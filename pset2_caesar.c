#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    // Verify the key entered is one number of only positive digits
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        bool digit = isdigit(argv[1][i]);
        if (digit == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Store key as an int, store the plaintext, and make an array to encrypt
    int key = atoi(argv[1]);
    string ptxt = get_string("plaintext: ");
    int array_c[strlen(ptxt)];

    for (int i = 0; i < strlen(ptxt); i++)
    {
        array_c[i] = (ptxt[i]);
    }

    // Convert to ciphertext with an array
    for (int i = 0; i < strlen(ptxt); i++)
    {
        if (ptxt[i] > 96 && ptxt[i] < 123)
        {
            array_c[i] = ((array_c[i] - 97 + key) % 26);
            array_c[i] += 97;
        }
        else if (ptxt[i] > 64 && ptxt[i] < 91)
        {
            array_c[i] = ((array_c[i] - 65 + key) % 26);
            array_c[i] += 65;
        }
    }

    // Convert array back into string and print ciphertext
    for (int i = 0; i < strlen(ptxt); i++)
    {
        ptxt[i] = (array_c[i]);
    }

    printf("ciphertext: %s\n", ptxt);
}

