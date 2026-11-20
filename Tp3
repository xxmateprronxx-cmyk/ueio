#include <stdio.h>

int main(void)
{
    float peso, altura, indice;

    do
    {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);

        if (peso <= 0)
            printf("Error: el peso debe ser un numero positivo.\n");
    }
    while (peso <= 0);

    do
    {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);

        if (altura <= 0)
            printf("Error: la altura debe ser un numero positivo.\n");
    }
    while (altura <= 0);

    indice = peso / (altura * altura);

    printf("\nSu indice de masa corporal es: %.2f\n\n", indice);

	printf("  Indice   | Condicion\n");
	printf("----------------------------\n");
	printf("  < 18.5   | Bajo peso\n");
	printf("  18.5-24.9| Normal\n");
	printf("  25.0-29.9| Sobrepeso\n");
	printf("  >= 30    | Obesidad\n\n");

    if (indice < 18.5)
        printf("Ud. tiene bajo peso");
    else if (indice < 25)
        printf("Ud. tiene un peso normal");
    else if (indice < 30)
        printf("Ud. tiene sobrepeso");
    else
        printf("Ud. tiene obesidad");

    return 0;
}
