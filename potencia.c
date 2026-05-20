#include <stdio.h>
#include "function_potencia.c"

int main() 
{
    int base, expoente;

    printf("--- Calculo de Potencia ---\n");
    printf("Digite o valor da base (inteiro): ");
    scanf("%d", &base);
    
    printf("Digite o valor do expoente (inteiro positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0) 
    {
        printf("Por favor, insira um expoente maior ou igual a zero.\n");
    } 
    else 
    {
        int resultado = calcular_potencia(base, expoente);
        printf("\nO resultado de %d elevado a %d e: %d\n", base, expoente, resultado);
    }

    
    printf("Criado por Leonardo Torres");

    return 0;
}