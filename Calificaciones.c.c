#include <stdio.h>

int main(void)
{
	int nota;

	printf("Ingrese su calificación: \n");
	scanf("%d", &nota);

	if (nota >= 90)
	{
		printf("Calificación: A\n");
	}
	else if (nota >= 80 && nota < 90)
	{
		printf("Calificación: B\n");
	}
	else if (nota >= 70 && nota < 80)
	{
		printf("Calificación: C\n");
	}
	else if (nota >= 60 && nota < 70)
	{
		printf("Calificación: D\n");
	}
	else
	{
		printf("Calificación: F\n");
	}

	return 0;
}