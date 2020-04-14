#include <cs50.c>
#include <stdio.h>

int main(void)
{
    float preco = get_float("Qual eh o preco?\n");
    printf("O valor total eh: %.2f", preco*1.0625);
}