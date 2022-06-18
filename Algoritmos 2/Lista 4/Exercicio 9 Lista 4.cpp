#include<stdio.h>
#include<stdlib.h>

void   calcular(float preFabrica,float perLucro,float perImposto,float *valorLucro,float *valorImposto,float *valorFinal);
main()
{
	float preFabrica, perLucro, perImposto, valorLucro, valorImposto, valorFinal;
	
	printf("Digite o preco de fabrica: ");
	scanf("%f", &preFabrica);
	printf("Digite o percentual de lucro: ");
	scanf("%f", &perLucro);
	printf("Digite o percentual de impostos: ");
	scanf("%f", &perImposto);
	
	calcular(preFabrica, perLucro, perImposto, &valorLucro, &valorImposto, &valorFinal);
	
	printf("\nLucro: %f", valorLucro);
	printf("\nImpostos: %f", valorImposto);
	printf("\nValor final: %f", valorFinal);
	printf("\n");
	system("pause");
}

void   calcular(float preFabrica,float perLucro,float perImposto,float *valorLucro,float *valorImposto,float *valorFinal)
{
	*valorLucro = (preFabrica * perLucro) / 100;
	*valorImposto = (preFabrica * perImposto) / 100;
	*valorFinal = preFabrica + *valorLucro + *valorImposto;
}
