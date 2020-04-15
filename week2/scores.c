#include <cs50.h>
#include <stdio.h>


float media(int qtd, int valores[]);

int main(void)
{
    printf("Calculo de media final.\n");
    int n = get_int("Numero notas: ");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Nota %i: ",i+1);
    }


    printf("Media: %.2f\n", media(n, scores));

}

float media(int qtd, int valores[])
{
    int soma = 0;
    for (int i = 0; i < qtd; i++)
    {
        soma += valores[i];
    }
    return (float) soma / (float) qtd;
}