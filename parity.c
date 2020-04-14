#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int n = get_int("digite um numero: ");
    if (n % 2 == 0)
    {
        printf("numero par.\n");
    }
    else
    {
        printf("numero impar\n");
    }
    
}