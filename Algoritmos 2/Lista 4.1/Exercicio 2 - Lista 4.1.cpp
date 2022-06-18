#include<stdio.h>
#include<stdlib.h>
void maximoMinimo(int *v, int N, int *maximo, int *minimo);

main()
{
	int tam, i, maior,  menor;
	printf("Informe o tamanho do vetor: ");scanf("%d", &tam);
	int vet[tam];
	for(i=0;i<tam;i++)
	{
		printf("Numero: "); scanf("%d", &vet[i]);
	}
	maximoMinimo(vet, tam, &maior, &menor);
	printf("O maior valor e: %d\n", maior);
	printf("O menor valor e: %d\n", menor);
	system("pause");
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
	*maximo=*v;
	*minimo=*v;
	int i;
	for(i=0;i<N;i++)
	{
		if(*v>*maximo)
		{
			*maximo=*v;
		}
		if(*v<*minimo)
		{
			*minimo=*v;
		}
		*v++;
	}
}
