#include<stdio.h>
#include<stdlib.h>
float calc_aum(float salario, float *boni);
main()
{
	float sal, aum, novo;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	novo=calc_aum(sal, &aum);
	printf("A bonificacao sera: %f\n",aum);
	printf("Novo salario sera: %f",novo);
	system("pause");
}

float calc_aum(float salario, float *boni)
{

	if(salario<=500)
	*boni=salario*0.05;
	
	else if(salario>500 && salario<1200)
	*boni=salario*0.12;
	
	else if (salario>=1200)
	*boni=0;
	
	return salario+*boni;
	}

