#include<stdio.h>
#include<stdlib.h>

float funca(float sal);
float funcb(int horas, float valor_hora);
float func(float sal_bruto);
void funcd(float sal_bruto, float imposto);

main()
{
	float sal_base, vhora, bruto, imp;
	int numhoras;
	printf("Informe  o salario  base: ");
	scanf("%f", &sal_base);
	printf("Informe  o numero de horas trabalhadas: ");
	scanf("%d", &numhoras);
	vhora=funca(sal_base);
	bruto=funcb(numhoras, vhora);
	imp=func(bruto);
	funcd(bruto, imp);
}

float funca(float sal)
{
	
	return sal*0.13;
}

float funcb(int horas, float valor_hora)
{
	return horas*valor_hora;
} 

float func(float sal_bruto)
{
	return sal_bruto*0.0755;
}

void funcd(float sal_bruto, float imposto)
{
	printf("O salario liquido e: %f", sal_bruto-imposto);	
}
