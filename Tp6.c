#include <stdio.h>

#define PI 3.141592

float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main() {
    int opcion;
    float longitud, altura, radio;
    float area, perimetro;

    do {
        printf("Ingrese la figura que desea calcular\n");
        printf("1: Rectangulo\n");
        printf("2: Circulo\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        if (opcion != 1 && opcion != 2) {
            printf("Error: opcion invalida.\n\n");
        }

    } while (opcion != 1 && opcion != 2);

    switch (opcion) {

        case 1:
            printf("\nOpcion de rectangulo seleccionada\n");

            do {
                printf("Ingrese la longitud del rectangulo: ");
                scanf("%f", &longitud);

                if (longitud <= 0)
                    printf("Error: debe ingresar un valor positivo.\n");

            } while (longitud <= 0);

            do {
                printf("Ingrese la altura del rectangulo: ");
                scanf("%f", &altura);

                if (altura <= 0)
                    printf("Error: debe ingresar un valor positivo.\n");

            } while (altura <= 0);

            area = calcularAreaRectangulo(longitud, altura);
            perimetro = calcularPerimetroRectangulo(longitud, altura);

            imprimirResultados(area, perimetro);
            break;

        case 2:
            printf("\nOpcion de circulo seleccionada\n");

            do {
                printf("Ingrese el radio del circulo: ");
                scanf("%f", &radio);

                if (radio <= 0)
                    printf("Error: debe ingresar un valor positivo.\n");

            } while (radio <= 0);

            area = calcularAreaCirculo(radio);
            perimetro = calcularPerimetroCirculo(radio);

            imprimirResultados(area, perimetro);
            break;
    }

    return 0;
}

float calcularAreaRectangulo(float longitud, float altura) {
    return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
    return 2 * (longitud + altura);
}

float calcularAreaCirculo(float radio) {
    return PI * radio * radio;
}

float calcularPerimetroCirculo(float radio) {
    return 2 * PI * radio;
}


void imprimirResultados(float area, float perimetro) {
    printf("\nEl area es: %.2f\n", area);
    printf("El perimetro es: %.2f\n", perimetro);
}