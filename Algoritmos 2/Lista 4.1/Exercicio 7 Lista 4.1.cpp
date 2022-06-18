#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

void pares_impares(int tamVetor, int *vetor, int *numPares, int *numImpares);

main()
{
	int tam;
	printf("Informe o tamanho do vetor: "); scanf("%d", &tam);
	int vet[tam], i, par, impar;
	for(i=0;i<tam;i++)
	{
		printf("Informe os valores: "); scanf("%d", &vet[i]);
	}
	pares_impares(tam ,&vet,&par, &impar);
	printf("Quantidade de pares: %d", par);
	printf("Quantidade de impar: %d", impar);
	system("pause");
	
}

void pares_impares(int tamVetor, int *vetor, int *numPares, int *numImpares)
{
	
	int i;
	for(i=0;i<tamVetor;i++)
	{
		if((*vetor[i]%2)==0)
		{
			*numPares++;
		}
		else
		*numImpares++;
	}
}


