#include<stdio.h>
#include<stdlib.h>
void cubo (double numero, double *result);
main()
{
	double num, resultado;
	printf("Informe um numero para elevar ao cubo: ");
	scanf("%lf", &num);
	cubo(num, &resultado);
	printf("\nO cubo sera: %lf\n",resultado);
	system("pause");
}

void cubo (double numero, double *result)
{
	int i;
	*result=1;
	for(i=0;i<3;i++)
	{
		*result*=numero;
	}
}
	
