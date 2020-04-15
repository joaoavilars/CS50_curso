#include <cs50.h>
#include <stdio.h>

int main(void)
{
  string name = get_string("Qual o seu nome?\n");
  printf("ola, %s\n", name);
}