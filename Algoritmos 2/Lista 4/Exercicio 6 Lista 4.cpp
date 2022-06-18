#include<stdio.h>
#include<stdlib.h>
void calcular(float x, float y, float *resultado);
float exp(float num, float exp);

main()
{
	float x, y, resultado;
	
	printf("Digite um numero (x): ");
	scanf("%f", &x);
	printf("Digite um numero (y): ");
	scanf("%f", &y);
	
	calcular(x,y, &resultado);
	
	printf("\nResultado: %f", resultado);
	printf("\n");
	system("pause");
	
}
void calcular(float x, float y, float *resultado)
{
	*resultado=exp(x,2)-y+10;
}
float exp(float num, float exp)
{
	float r=1;
	int i;
	for(i=0; i<exp; i++)
	{
		r*=num;
	}
	return r;
}

