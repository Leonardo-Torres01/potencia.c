#include <stdio.h>
#include "function_potencia.c"

int main() {
    int erros = 0;

   
    if (calcular_potencia(2, 2) != 4) erros++;
    if (calcular_potencia(3, 3) != 27) erros++;
    if (calcular_potencia(4, 4) != 256) erros++;
    if (calcular_potencia(5, 5) != 3125) erros++;

    if (erros == 0) 
    {
        printf("Todos os testes de Potencia: PASSOU\n");
    }
     else 
     {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }

  
    printf("Criado por Leonardo Torres");

    return 0;
}