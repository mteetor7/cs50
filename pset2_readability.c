#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Get text from user
    string text = get_string("Text: ");

    // Count letters, words, and sentences
    int L = count_letters(text);
    int W = count_words(text);
    int S = count_sentences(text);

    // Plug values into the index equation and adjust for 100 words
    float index = (0.0588 * ((float)L * (100 / (float)W))) - (0.296 * ((float)S * (100 / (float)W))) - 15.8;

    // Print resulting grade
    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        int grade = round(index);
        printf("Grade %i\n", grade);
        return 0;
    }
}


int count_letters(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        int letter = isalpha(text[i]);
        if (letter > 0)
        {
            count++;
        }
    }
    return count;
}

int count_words(string text)
{
    int count = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        int word = isspace(text[i]);
        if (word > 0)
        {
            count++;
        }
    }
    return count;
}

int count_sentences(string text)
{
    int count = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.')
        {
            count++;
        }
        else if (text[i] == '?')
        {
            count++;
        }
        else if (text[i] == '!')
        {
            count++;
        }
    }
    return count;
}
