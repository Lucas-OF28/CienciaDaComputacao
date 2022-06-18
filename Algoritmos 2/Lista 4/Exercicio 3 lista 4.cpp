#include<stdio.h>
#include<stdlib.h>
void calc_aum(float *salario, float *aumento);
main()
{
	float sal, aum;
	printf("Informe seu salario: ");
	scanf("%f", &sal);
	calc_aum(&sal, &aum);
	printf("O aumento sera: %f\n",aum);
	printf("Salario: %f",sal);
	system("pause");
}

void calc_aum(float *salario, float *aumento)
{

	if(*salario<=500)
	{
	*aumento=*salario*0.30;
	*salario=*salario+*aumento;
	}
	
	}

