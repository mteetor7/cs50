#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    long num;
    num = get_long("Number: ");
    
    if (num < 4000000000000 || num > 6000000000000000)
    {
        printf("INVALID\n");
        exit(0);
    }
        
    long one = (num % 10);
    long two = ((num % 100 - (num % 10)) / 10);
    long three = ((num % 1000 - num % 100) / 100);
    long four = ((num % 10000 - num % 1000) / 1000);
    long five = ((num % 100000 - num % 10000) / 10000);
    long six = ((num % 1000000 - num % 100000) / 100000);
    long seven = ((num % 10000000 - num % 1000000) / 1000000);
    long eight = ((num % 100000000 - num % 10000000) / 10000000);
    long nine = ((num % 1000000000 - num % 100000000) / 100000000);
    long ten = ((num % 10000000000 - num % 1000000000) / 1000000000);
    long eleven = ((num % 100000000000 - num % 10000000000) / 10000000000);
    long twelve = ((num % 1000000000000 - num % 100000000000) / 100000000000);
    long thirt = ((num % 10000000000000 - num % 1000000000000) / 1000000000000);
    long fourt = ((num % 100000000000000 - num % 10000000000000) / 10000000000000);
    long fift = ((num % 1000000000000000 - num % 100000000000000) / 100000000000000);
    long sixt = ((num - num % 1000000000000000) / 1000000000000000);
    
    char master = 'f';
    char visa = 'f';
    char amex = 'f';
    
    int macheck = ((sixt * 10) + fift);
    if (macheck == 51)
    {
        master = 't';
    }
    if (macheck == 52)
    {
        master = 't';
    }
    if (macheck == 53)
    {
        master = 't';
    }
    if (macheck == 54)
    {
        master = 't';
    }
    if (macheck == 55)
    {
        master = 't';
    }

    if (sixt == 4)
    {
        visa = 't';
    }
    if (thirt == 4)
    {
        visa = 't';
    }
    
    int amcheck = ((fift * 10) + fourt); 
    if (amcheck == 34)
    {
        amex = 't';
    }
    if (amcheck == 37)
    {
        amex = 't';
    }
    
    two = (two * 2);
    four = (four * 2);
    six = (six * 2);
    eight = (eight * 2);
    ten = (ten * 2);
    twelve = (twelve * 2);
    fourt = (fourt * 2);
    sixt = (sixt * 2);
    
    if (two > 9)
    {
        two = ((two % 10) + 1);
    }
    if (four > 9)
    {
        four = ((four % 10) + 1);
    }
    if (six > 9)
    {
        six = ((six % 10) + 1);
    }
    if (eight > 9)
    {
        eight = ((eight % 10) + 1);
    }
    if (ten > 9)
    {
        ten = ((ten % 10) + 1);
    }
    if (twelve > 9)
    {
        twelve = ((twelve % 10) + 1);
    }
    if (fourt > 9)
    {
        fourt = ((fourt % 10) + 1);
    }
    if (sixt > 9)
    {
        sixt = ((sixt % 10) + 1);
    }
    
    int check = (one + two + three + four + five + six + seven + eight + nine + ten + eleven + twelve + thirt + fourt + fift + sixt);
   
    if (check % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (amex == 't')
    {
        printf("AMEX\n");
    }
    else if (master == 't')
    {
        printf("MASTERCARD\n");
    }
    else if (visa == 't')
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }    
}
