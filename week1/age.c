#include <cs50.c>
#include <stdio.h>

int main(void)
{
    int age = get_int("Qual a sua idade?\n");
    printf("Voce tem %i dia de vida.\n",age*365);

}