#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    int j;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    
    for (int i = 0; i < h; i++)
    {
        for (int d = h - 1; d > i; d--)
        {    
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
        
}
