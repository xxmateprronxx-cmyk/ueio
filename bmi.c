#include <stdio.h>

int main(void)
{
    float peso, altura, indice;

    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    indice = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", indice);

    printf("  Indice   | Condicion\n");
    printf("----------------------------\n");
    printf("  < 18.5   | Bajo peso\n");
    printf("  18.5-24.9| Normal\n");
    printf("  25.0-29.9| Sobrepeso\n");
    printf("  >= 30    | Obesidad\n");

    return 0;
}