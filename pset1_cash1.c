#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float d;
    do
    {
        d = get_float("Change owed: ");
    }
    while (d < 0);
    
    int c = round(d * 100);
    
    int n = 0;
    while (c >= 25)
    {
        n++;
        c = (c - 25);
    }
    while (c >= 10)
    {
        n++;
        c = (c - 10);
    }
    while (c >= 5)
    {
        n++;
        c = (c - 5);
    }
    while (c >= 1)
    {
        n++;
        c--;
    }
    printf("%i\n", n);
}
