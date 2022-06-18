#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void calcularEsfera(float r, float *area, float *volume);

main()
{
	float raio, area, vol;
	printf("Informe o raio da esfera: ");
	scanf("%f", &raio);
	calcularEsfera(raio, &area, &vol);
	printf("A area e: %f", area);
	printf("\nO volume e: %f", vol);
	system("pause");
}
void calcularEsfera(float r, float *area, float *volume)
{
	*area=4.0*3.14159*pow(r,2);
	*volume=4/3*3.14159*pow(r,3);
}

