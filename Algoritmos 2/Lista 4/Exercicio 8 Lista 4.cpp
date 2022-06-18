#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int raizesReais (float a, float b, float c, float *x1, float *x2);

main()
{
	float a, b, c, x1, x2;
	int result;
	printf("Informe o valor de a: ");scanf("%f", &a);
	printf("Informe o valor de b: ");scanf("%f", &b);
	printf("Informe o valor de c: ");scanf("%f", &c);
	result=raizesReais(a, b, c, &x1, &x2);
	if(result==0)
	{
		printf("Nao e possivel calcular raizes complexas");
	}
	else
	{
		printf("x\'=%f\n", x1);
		printf("x\"=%f\n", x2);
	}
	system("pause");
}

int raizesReais (float a, float b, float c, float *x1, float *x2)
{
	float delta;
	delta=pow(b, 2)-4*a*c;
	if(delta<0)
	{
		return 0;
	}
	else
	{
		*x1=(-b+sqrt(delta))/(2*a);
		*x2=(-b-sqrt(delta))/(2*a);
		return 1;
	}
	
}
