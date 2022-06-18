#include<stdio.h>
#include<stdlib.h>

void calcular(float perAlcool, float perGasolina, float perDiesel, float *vAlcool, float *vGasolina, float *vDiesel);

main()
{
	float perAlcool, perGasolina, perDiesel, vAlcool, vGasolina, vDiesel;
	
	printf("Valor Alcool: ");
	scanf("%f", &vAlcool);
	printf("Percentual aumento alcool: "); 
	scanf("%f", &perAlcool);
	printf("Valor gasolina: ");
	scanf("%f", &vGasolina);
	printf("Percentual aumento gasolina: ");
	scanf("%f", &perGasolina);
	printf("Valor diesel: ");
	scanf("%f", &vDiesel);
	printf("Percentual aumento diesel: ");
	scanf("%f", &perDiesel);
	
	calcular(perAlcool, perGasolina, perDiesel, &vAlcool, &vGasolina, &vDiesel);
	
	printf("\nNovo Valor: ");
	printf("\nAlcool: %f", vAlcool);
	printf("\nGasolina: %f", vGasolina);
	printf("\nDiesel: %f", vDiesel);
	printf("\n");
	system("pause");
}

void calcular(float perAlcool, float perGasolina, float perDiesel, float *vAlcool, float *vGasolina, float *vDiesel)
{
	*vAlcool += (*vAlcool * perAlcool)/100;
	*vGasolina += (*vGasolina * perGasolina)/100;
	*vDiesel += (*vDiesel * perDiesel)/100;
}
