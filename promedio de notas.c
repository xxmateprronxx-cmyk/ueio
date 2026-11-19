//Repositorio GitHub para los demás códigos: https://github.com/xxmateprronxx-cmyk/ueio

#include <stdio.h>

int main() {
    int cantidad, i;
    float nota;
    float suma = 0, promedio;
    float notaMax, notaMin;

    
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad);

        if (cantidad <= 0) {
            printf("Error: la cantidad debe ser un numero positivo.\n");
        }
    } while (cantidad <= 0);

    
    for (i = 1; i <= cantidad; i++) {

        do {
            printf("Ingrese la calificacion del estudiante %d (0-100): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 100) {
                printf("Error: la calificacion debe estar entre 0 y 100.\n");
            }

        } while (nota < 0 || nota > 100);

        suma += nota;

        if (i == 1) {
            notaMax = nota;
            notaMin = nota;
        } else {
            if (nota > notaMax) {
                notaMax = nota;
            }

            if (nota < notaMin) {
                notaMin = nota;
            }
        }
    }

    promedio = suma / cantidad;

    printf("\n----- RESULTADOS -----\n");
    printf("Promedio: %.2f\n", promedio);
    printf("Calificacion mas alta: %.2f\n", notaMax);
    printf("Calificacion mas baja: %.2f\n", notaMin);

    return 0;
}